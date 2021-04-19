#include <math.h>

#include "quadratic_equation.h"

solution quadratic_equation(double a, double b, double c) {
    solution result;

    if (a == 0.0) {
        if (b == 0.0) {
            result.number_of_solutions = 0;
            return result;
        } else {
            result.number_of_solutions = 1;
            result.x1 = (-1 * c) / b;
            return result;
        }
    }

    double D = pow(b, 2) - 4 * a * c;

    if (D < 0.0) {
        result.number_of_solutions = 0;
    }

    else if (D == 0.0) {
        result.number_of_solutions = 1;
        result.x1 = (-1.0 * b) / (2.0 * a);
    }

    else if (D > 0.0) {
        result.number_of_solutions = 2;
        result.x1 = ((-1.0 * b) - sqrt(D)) / (2.0 * a);
        result.x2 = ((-1.0 * b) + sqrt(D)) / (2.0 * a);
    }

    return result;
}
