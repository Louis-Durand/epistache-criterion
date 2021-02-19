#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "functions.h"

Test(my_putstr, null_string, .init = cr_redirect_stdout)
{
    my_putstr(NULL);
    fflush(stdout);
}

Test(my_putstr, empty_string, .init = cr_redirect_stdout)
{
    my_putstr("");
    fflush(stdout);
}

Test(my_putstr, simple_case, .init = cr_redirect_stdout)
{
    my_putstr("Hello world\n");
    fflush(stdout);
    cr_expect_stdout_eq_str("Hello world\n");
}