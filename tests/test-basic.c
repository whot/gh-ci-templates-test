#include <assert.h>
#include "example.h"

int main(void)
{
    assert(example_add(2, 3) == 5);
    assert(example_add(-1, 1) == 0);
    assert(example_add(0, 0) == 0);

    assert(example_multiply(2, 3) == 6);
    assert(example_multiply(-1, 5) == -5);
    assert(example_multiply(0, 100) == 0);

    return 0;
}
