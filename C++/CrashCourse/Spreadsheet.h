#ifndef _SPREADSHEET_H_
#define _SPREADSHEET_H_


# include <iostream>


class Spreadsheet
{
    public:
    friend class SpreadsheetCell;
    void init_private_var(int var);
    void printout();
    ~Spreadsheet();

    private:
    int m_private_var;

};

#endif