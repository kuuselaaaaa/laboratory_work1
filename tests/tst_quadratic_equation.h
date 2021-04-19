#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "quadratic_equation.h"
}

TEST(quadratic_equation_solution, no_solution) {
    solution result = quadratic_equation(2, 2, 1);
    EXPECT_EQ(0.0, result.number_of_solutions);
}

TEST(quadratic_equation_solution, one_solution) {
    solution result = quadratic_equation(4, 4, 1);
    EXPECT_EQ(1, result.number_of_solutions);
    EXPECT_DOUBLE_EQ(-0.5, result.x1);
}

TEST(quadratic_equation_solution, two_solsutions_1) {
    solution result = quadratic_equation(1, 4, 0);
    EXPECT_EQ(2, result.number_of_solutions);
    EXPECT_DOUBLE_EQ(-4.0, result.x1);
    EXPECT_DOUBLE_EQ(0.0, result.x2);
}

TEST(quadratic_equation_solution, two_solsutions_2) {
    solution result = quadratic_equation(2, -5, 2);
    EXPECT_EQ(2, result.number_of_solutions);
    EXPECT_DOUBLE_EQ(0.5, result.x1);
    EXPECT_DOUBLE_EQ(2.0, result.x2);
}

TEST(quadratic_equation_solution, extra_1) {
    solution result = quadratic_equation(1, 0, 0);
    EXPECT_EQ(1, result.number_of_solutions);
    EXPECT_DOUBLE_EQ(0.0, result.x1);
}

TEST(quadratic_equation_solution, extra_2) {
    solution result = quadratic_equation(0, 1, 0);
    EXPECT_EQ(1, result.number_of_solutions);
    EXPECT_DOUBLE_EQ(0.0, result.x1);
}

TEST(quadratic_equation_solution, extra_3) {
    solution result = quadratic_equation(0, 0, 1);
    EXPECT_EQ(0.0, result.number_of_solutions);
}

TEST(quadratic_equation_solution, extra_4) {
    solution result = quadratic_equation(0, 0, 0);
    EXPECT_EQ(0.0, result.number_of_solutions);
}
