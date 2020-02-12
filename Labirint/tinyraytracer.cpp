#define _USE_MATH_DEFINES
#include <cmath>
#include <limits>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "lib/stb/stb_image_write.h"
#define STB_IMAGE_IMPLEMENTATION
#include "lib/stb/stb_image.h"

#include "model.h"
#include "geometry.h"
#include "lib/Sphere.h"












//    float checkerboard_dist = std::numeric_limits<float>::max();
//    if (fabs(dir.y)>1e-3)  {
//        float d = -(orig.y+4)/dir.y; // the checkerboard plane has equation y = -4
//        Vec3f pt = orig + dir*d;
//        if (d>0 && fabs(pt.x)<10 && pt.z<-10 && pt.z>-30 && d<spheres_dist) {
//            checkerboard_dist = d;
//            hit = pt;
//            N = Vec3f(0,1,0);
//            material.diffuse_color = (int(.5*hit.x+1000) + int(.5*hit.z)) & 1 ? Vec3f(.3, .3, .3) : Vec3f(.3, .2, .1);
//        }
//    }






//int main() {
//    int n = -1;
//    unsigned char *pixmap = stbi_load("envmap.jpg", &envmap_width, &envmap_height, &n, 0);
//    if (!pixmap || 3!=n) {
//        std::cerr << "Error: can not load the environment map" << std::endl;
//        return -1;
//    }
//    envmap = std::vector<Vec3f>(envmap_width*envmap_height);
//    for (int j = envmap_height-1; j>=0 ; j--) {
//        for (int i = 0; i<envmap_width; i++) {
//            envmap[i+j*envmap_width] = Vec3f(pixmap[(i+j*envmap_width)*3+0], pixmap[(i+j*envmap_width)*3+1], pixmap[(i+j*envmap_width)*3+2])*(1/255.);
//        }
//    }
//    stbi_image_free(pixmap);

//    Material      ivory(1.0, Vec4f(0.6,  0.3, 0.1, 0.0), Vec3f(0.4, 0.4, 0.3),   50.);
//    Material      glass(1.5, Vec4f(0.0,  0.5, 0.1, 0.8), Vec3f(0.6, 0.7, 0.8),  125.);
//    Material red_rubber(1.0, Vec4f(0.9,  0.1, 0.0, 0.0), Vec3f(0.3, 0.1, 0.1),   10.);
//    Material     mirror(1.0, Vec4f(0.0, 10.0, 0.8, 0.0), Vec3f(1.0, 1.0, 1.0), 1425.);

//    std::vector<Sphere> spheres;
//    spheres.push_back(Sphere(Vec3f(-3,    0,   -16), 2,      ivory));
//    spheres.push_back(Sphere(Vec3f(-1.0, -1.5, -12), 2,      glass));
//    spheres.push_back(Sphere(Vec3f( 1.5, -0.5, -18), 3, red_rubber));
//    spheres.push_back(Sphere(Vec3f( 7,    5,   -18), 4,     mirror));
//    spheres.push_back(Sphere(Vec3f(0, -1000, 0), 996, mirror));
//    spheres.push_back(Sphere(Vec3f(0, 0, -2000), 1900, mirror));

//    std::vector<Light>  lights;
//    lights.push_back(Light(Vec3f(-20, 20,  20), 1.5));
//    lights.push_back(Light(Vec3f( 30, 50, -25), 1.8));
//    lights.push_back(Light(Vec3f( 30, 20,  30), 1.7));

//    render(spheres, lights);

//    return 0;
//}

