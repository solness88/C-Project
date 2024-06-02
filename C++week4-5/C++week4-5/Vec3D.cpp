#include "Vec3D.hpp"
#include <cmath>

int Vec3D::getLength()
{
    return std::sqrt(x*x + y*y + z*z);
}
