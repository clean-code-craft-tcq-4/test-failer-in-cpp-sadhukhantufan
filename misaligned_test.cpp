#include <assert.h>
#include "misaligned.h"

void testPairToNumber(misaligned::MajorColor major, misaligned::MinorColor minor)
{
    misaligned::Misaligned *l_object{};
    int pairNumber = l_object->GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == l_object->expectNumberFromColor(major, minor));
}

int main()
{
    misaligned::Misaligned l_object;
    int result = l_object.printColorMap();
    assert(result == 25);
    testPairToNumber(misaligned::BLACK, misaligned::ORANGE);
    testPairToNumber(misaligned::VIOLET, misaligned::SLATE);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
