#include <iostream>
#include "SpreadsheetCell.h"

int main()
{
    SpreadsheetCell sp ,sp1;

    sp.setValue(10);
    sp1 = sp;
    std::cout << sp1.getValue() << std::endl;

    return 0;
}
