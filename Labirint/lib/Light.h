#ifndef LIGHT_H
#define LIGHT_H

struct Light {
    Light(const Vec3f &p, const float i) : position(p), intensity(i) {}
    Vec3f position;
    float intensity;
};

#endif // LIGHT_H
