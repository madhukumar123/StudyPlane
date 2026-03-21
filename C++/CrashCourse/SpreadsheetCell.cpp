#include "SpreadsheetCell.h"


SpreadsheetCell::SpreadsheetCell()
{
    setValue(0.0);
}

SpreadsheetCell::SpreadsheetCell(double init_value)
{
    setValue(init_value);
}

void SpreadsheetCell::setValue(double inValue)
{
    mValue = inValue;
}

double SpreadsheetCell::getValue() const
{
    return mValue;
}

SpreadsheetCell::SpreadsheetCell(const SpreadsheetCell& src):mValue(src.mValue)
{

}

SpreadsheetCell& SpreadsheetCell::operator=(const SpreadsheetCell& rhs)
{

}