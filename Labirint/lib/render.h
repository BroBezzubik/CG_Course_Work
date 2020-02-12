#ifndef RENDER_H
#define RENDER_H

#include "algorithm"
#include <vector>
#include <geometry.h>
#include "lib/Sphere.h"
#include "lib/Light.h"
#include "lib/stb/stb_image_write.h"

Vec3f reflect(const Vec3f &I, const Vec3f &N);
Vec3f refract(const Vec3f &I, const Vec3f &N, const float eta_t, const float eta_i=1.f);
bool scene_intersect(const Vec3f &orig, const Vec3f &dir, const std::vector<Sphere> &spheres, Vec3f &hit, Vec3f &N, Material &material);
Vec3f cast_ray(const Vec3f &orig, const Vec3f &dir, const std::vector<Sphere> &spheres, const std::vector<Light> &lights, size_t depth=0, size_t max_depth = 1);
void Rayrender(const std::vector<Sphere> &spheres, const std::vector<Light> &lights, size_t max_depth);

#endif // RENDER_H
