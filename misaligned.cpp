#include "misaligned.h"

namespace misaligned
{

    const char *majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    int numberOfMajorColors = sizeof(majorColor) / sizeof(majorColor[0]);
    const char *minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int numberOfMinorColors = sizeof(minorColor) / sizeof(minorColor[0]);

    int Misaligned::printColorMap()
    {
        int i = 0, j = 0;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
            }
        }
        return i * j;
    }

    int Misaligned::GetPairNumberFromColor(MajorColor major, MinorColor minor)
    {
        return major * 5 + minor;
    }

    int Misaligned::expectNumberFromColor(MajorColor major, MinorColor minor)
    {
        return major * numberOfMinorColors + minor + 1;
    }
}