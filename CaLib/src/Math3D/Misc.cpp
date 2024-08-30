
#include "Misc.hpp"
#include <cmath>


float cf::math::round(float f)
{
    // Note that this works with positive *and* negative numbers.
    return floor(f + 0.5f);
}

double cf::math::round(double d)
{
    // Note that this works with positive *and* negative numbers.
    return floor(d + 0.5);
}
