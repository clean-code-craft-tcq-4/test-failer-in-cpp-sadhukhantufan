#include "tshirts.h"
#include <assert.h>

int main()
{
    tshirts::tshirtsize *l_object{};
    assert(l_object->size(37) == 'S');
    assert(l_object->size(40) == 'M');
    assert(l_object->size(43) == 'L');
    // No sizename definition for size-> 38 and 42 in implementation.
    assert(l_object->size(38) == 'S');
    assert(l_object->size(42) == 'L');
    std::cout << "All is well (maybe!)\n";
    return 0;
}
