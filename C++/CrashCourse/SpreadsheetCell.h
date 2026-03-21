#ifndef _SPREADSHEETCELL_H_
#define _SPREADSHEETCELL_H_

#include "Spreadsheet.h"


class SpreadsheetCell
{
    public:
    SpreadsheetCell();
    SpreadsheetCell(double init_value);
    void setValue(double inValue);
    double getValue() const;
    SpreadsheetCell(const SpreadsheetCell& src);
    SpreadsheetCell& operator=(const SpreadsheetCell& rhs);
    Spreadsheet sp;
    void print_private();

    private:
    double mValue;
};

#endif