#include <criterion/criterion.h>
#include "functions.h"

Test(my_strlen, null_string)
{
    int size = my_strlen(NULL);
    cr_expect_eq(size, 0);
}

Test(my_strlen, empty_string)
{
    int size = my_strlen("");
    cr_expect_eq(size, 0);
}

Test(my_strlen, simple_case)
{
    int size = my_strlen("Hello world");
    cr_expect_eq(size, 11);
}