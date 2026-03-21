class SpreadsheetCell
{
    public:
    SpreadsheetCell();
    SpreadsheetCell(double init_value);
    void setValue(double inValue);
    double getValue() const;
    SpreadsheetCell(const SpreadsheetCell& src);
    SpreadsheetCell& operator=(const SpreadsheetCell& rhs);

    private:
    double mValue;
};