#include <cmath>
#include "root.h"

double root(double x) {
    if (x < 0) {
        return -1; // Помилка: від'ємне число
    }
    return std::sqrt(x);
}