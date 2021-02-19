#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "functions.h"

Test(my_error_print, test_type_1, .init = cr_redirect_stderr)
{
    my_error_print(1);
    my_error_print(2);
    cr_expect_stderr_eq_str("Invalid move, please enter another one : \n"
                            "Wait for your turn to play\n");
}
