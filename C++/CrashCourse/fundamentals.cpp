
#include <iostream>
#include <cstdint>

using namespace std;

/*
integer type - short int, int, long int, long long int. each can be signed or unsigned.
*/
int sizeofInteger()
{
    cout << "\n the size of the integer data type is" << endl;
    // size of all interger values
    cout << "size of shot int : " << sizeof(short int) << endl;
    cout << "size of int : " << sizeof(int) << endl;
    cout << "size of long int : " << sizeof(long int) << endl;
    cout << "size of long long int : "  << sizeof(long long int) << endl;

    cout << "size of unsigned shot int : " << sizeof(unsigned short int) << endl;
    cout << "size of unsigned int : " << sizeof(unsigned int) << endl;
    cout << "size of unsigned long int : " << sizeof(unsigned long int) << endl;
    cout << "size of unsigned long long int : "  << sizeof(unsigned long long int) << endl;

    cout << "size of int8_t : " << sizeof(int8_t) << endl;
    cout << "size of int16_t : " << sizeof(int16_t) << endl;
    cout << "size of int32_t : " << sizeof(int32_t) << endl;
    cout << "size of int64_t : "  << sizeof(int64_t) << endl;
    

    return 0;
}

/*
floating point type - float, double, long double.
*/
void sizeofFloat()
{
    cout << "\n the size of float data type is" << endl;
    cout << "size of float : " << sizeof(float) << endl;
    cout << "size of double : " << sizeof(double) << endl;
    cout << "size of long double : " << sizeof(long double) << endl;
}

/*
character types - char, char16_t, chat32_t, signed char, unsigned char, wchar_t.
*/

void sizeofChar()
{
    cout << "\n the size of characters" << endl;
    cout << "size of char : " << sizeof(char) << endl;
    cout << "size of the signed char : " << sizeof(signed char) << endl;
    cout << "size of the unsigned char : " << sizeof(unsigned char) << endl;
    cout << "size of char16_t : " << sizeof(char16_t) << endl;
    cout << "size of char32_t : " << sizeof(char32_t) << endl;
    cout << "size of wchat_t : " << sizeof(wchar_t) << endl;
}

void characterLiterals()
{
    cout << "\nthe character litarals in between hello world is given below" << endl;
    cout << "new line \\n - " << "hello\nworld" << endl;
    cout << "tab horizontal \\t - " << "hello\tworld" << endl;
    cout << "tab vertical \\v - " << "hello\vworld" << endl;
    cout << "backspace \\b - " << "hello\bworld" << endl;
    cout << "carriage return \\r - " << "hello\rworld" << endl;
    cout << "form feed \\f - " << "hello\fworld" << endl;
    cout << "alert \\a - " << "hello\aworld" << endl;
    cout << "backslash \\\\ - " << "hello\\world" << endl;
    cout << "question mark \? - " << "hello?world" << endl;
    cout << "single quote \\' - " << "hello\'world" << endl;
    cout << "double quote \\\" - " << "hello\"world" << endl;
    cout << "the null character \\0 - " << "hello\0world" << endl;
}

/*
boolean type
*/

void booleantype()
{
    bool b1 = true;
    bool b2 = false;

    cout << " true " << b1 << " false " << b2 << endl;
}

/*
logical operators
*/

void logicalOperators()
{
    bool b1 = true;
    bool b2 = false;
    cout << "\nthe logical operators" << endl;
    cout << "true && false " << (b1&&b2) << endl;
    cout << "true && !false " << (b1 && !b2) << endl;
    cout << "true || false " << (b1||b2) << endl;
    cout << "false || false " << (b2||b2) << endl;
}