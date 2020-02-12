QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    lib/render.cpp \
    lib/stb/stb_vorbis.c \
    main.cpp \
    mainwindow.cpp \
    model.cpp \
    tinyraytracer.cpp

HEADERS += \
    geometry.h \
    lib/Light.h \
    lib/Sphere.h \
    lib/render.h \
    lib/stb/stb.h \
    lib/stb/stb_c_lexer.h \
    lib/stb/stb_connected_components.h \
    lib/stb/stb_divide.h \
    lib/stb/stb_ds.h \
    lib/stb/stb_dxt.h \
    lib/stb/stb_easy_font.h \
    lib/stb/stb_herringbone_wang_tile.h \
    lib/stb/stb_image.h \
    lib/stb/stb_image_resize.h \
    lib/stb/stb_image_write.h \
    lib/stb/stb_include.h \
    lib/stb/stb_leakcheck.h \
    lib/stb/stb_perlin.h \
    lib/stb/stb_rect_pack.h \
    lib/stb/stb_sprintf.h \
    lib/stb/stb_textedit.h \
    lib/stb/stb_tilemap_editor.h \
    lib/stb/stb_truetype.h \
    lib/stb/stb_voxel_render.h \
    lib/stb/stretchy_buffer.h \
    mainwindow.h \
    model.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
