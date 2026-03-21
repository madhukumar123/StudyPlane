#include <iostream>
#include "Spreadsheet.h"
#include "SpreadsheetCell.h"


int main()
{
    SpreadsheetCell sp ,sp1;
    Spreadsheet sph;

    sp.setValue(10);
    sp1 = sp;
    std::cout << sp1.getValue() << std::endl;

    sp1.print_private();

    return 0;
}
