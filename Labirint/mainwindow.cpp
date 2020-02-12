#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "lib/Sphere.h"
#include "lib/render.h"
#include "lib/Sphere.h"
#include "lib/Light.h"

#include <QGraphicsPixmapItem>
#include <vector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Add_PushButton_clicked()
{
    int x = ui-> Sphere_spinBox_x->value();
    int y = ui->Sphere_spinBox_y->value();
    int z = ui->Sphere_spinBox_z->value();
    int r = ui->Sphere_spinBox_r->value();

    Material      ivory(1.0, Vec4f(0.6,  0.3, 0.1, 0.0), Vec3f(0.4, 0.4, 0.3),   50.);
    Material      glass(1.5, Vec4f(0.0,  0.5, 0.1, 0.8), Vec3f(0.6, 0.7, 0.8),  125.);
    Material red_rubber(1.0, Vec4f(0.9,  0.1, 0.0, 0.0), Vec3f(0.3, 0.1, 0.1),   10.);
    Material     mirror(1.0, Vec4f(0.0, 10.0, 0.8, 0.0), Vec3f(1.0, 1.0, 1.0), 1425.);

    Material tmp;
    if (ui->Material_glass_radioButton->isChecked())
        tmp = glass;
    else if (ui->Material_mirror_radioButton_3->isChecked())
        tmp = mirror;
    else if (ui->Material_ivory_radioButton->isChecked())
        tmp = ivory;
    else
        tmp = red_rubber;

    Sphere &sphere =  * new Sphere(Vec3f(x, y, z), r, tmp);
    this->spheres.push_back(sphere);
    ui->process_label->setText(QString("Add sphere!"));
}

void MainWindow::on_Render_pushButton_clicked()
{
    ui->process_label->setText(QString("Wait please...."));

    Material      ivory(1.0, Vec4f(0.6,  0.3, 0.1, 0.0), Vec3f(0.4, 0.4, 0.3),   50.);
    Material      glass(1.5, Vec4f(0.0,  0.5, 0.1, 0.8), Vec3f(0.6, 0.7, 0.8),  125.);
    Material red_rubber(1.0, Vec4f(0.9,  0.1, 0.0, 0.0), Vec3f(0.3, 0.1, 0.1),   10.);
    Material     mirror(1.0, Vec4f(0.0, 10.0, 0.8, 0.0), Vec3f(1.0, 1.0, 1.0), 1425.);

    this->spheres.push_back(Sphere(Vec3f(0, -1000, 0), 996, mirror));
    this->spheres.push_back(Sphere(Vec3f(0, 0, -2000), 1900, mirror));

    std::vector<Light> lights;
    lights.push_back(Light(Vec3f(-20, 20,  20), 1.5));
    lights.push_back(Light(Vec3f( 30, 50, -25), 1.8));
    lights.push_back(Light(Vec3f( 30, 20,  30), 1.7));


    size_t deep = ui->deep->value();
    Rayrender(this->spheres, lights, deep);


    QImage image("out.jpg");
    ui->Image_viewr_label6->setPixmap(QPixmap::fromImage(image));
    ui->process_label->setText(QString("Done!"));
}
