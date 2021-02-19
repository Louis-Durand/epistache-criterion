#include <criterion/criterion.h>
#include "functions.h"

Test(my_sum, both_zero_parameters)
{
    cr_assert_eq(my_sum(0, 0), 0);
}

Test(my_sum, one_zero_parameter)
{
    cr_assert_eq(my_sum(5, 0), 5);
    cr_assert_eq(my_sum(0, 5), 5);
}

Test(my_sum, simple_sums)
{
    cr_assert_eq(my_sum(5, 3), 8);
    cr_assert_eq(my_sum(1, 2), 3);
}

Test(my_sub, both_zero_parameters)
{
    cr_assert_eq(my_sub(0, 0), 0);
}

Test(my_sub, one_zero_parameter)
{
    cr_assert_eq(my_sub(-2, 0), -2);
    cr_assert_eq(my_sub(0, 5), -5);
}

Test(my_sub, simple_subs)
{
    cr_assert_eq(my_sub(5, 3), 2);
    cr_assert_eq(my_sub(1, 2), -1);
}

Test(my_mult, both_zero_parameters)
{
    cr_assert_eq(my_mult(0, 0), 0);
}

Test(my_mult, one_zero_parameter)
{
    cr_assert_eq(my_mult(5, 0), 0);
    cr_assert_eq(my_mult(0, 5), 0);
}

Test(my_mult, simple_mult)
{
    cr_assert_eq(my_mult(5, 3), 15);
    cr_assert_eq(my_mult(1, 2), 2);
}

Test(my_div, both_zero_parameters)
{
    cr_assert_eq(my_div(0, 0), 0);
}

Test(my_div, one_zero_parameter)
{
    cr_assert_eq(my_div(5, 0), 0);
    cr_assert_eq(my_div(0, 5), 0);
}

Test(my_div, simple_div)
{
    cr_assert_eq(my_div(6, 3), 2);
    cr_assert_eq(my_div(1, 2), 0);
}
