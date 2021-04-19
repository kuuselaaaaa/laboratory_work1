#ifndef SQR_EQ_H
#define SQR_EQ_H

typedef struct _solution {
    double x1;
    double x2;
    int number_of_solutions;
} solution;

solution quadratic_equation(double a, double b, double c);

#endif
