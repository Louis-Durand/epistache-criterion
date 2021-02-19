#include <unistd.h>

void my_error_print(const int type)
{
    if (type == 1) {
        write(1, "Invalid move, please enter another one : \n", 42);
    } else if (type == 2) {
        write(1, "Wait for your turn to play\n", 27);
    }
}