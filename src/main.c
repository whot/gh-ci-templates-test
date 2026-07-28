#include <stdio.h>
#include "example.h"

int main(void)
{
    printf("2 + 3 = %d\n", example_add(2, 3));
    printf("4 * 5 = %d\n", example_multiply(4, 5));
    return 0;
}
