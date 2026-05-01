

// Class definition is in Class_and_Objects.cpp

#include "Class_and_Objects.h"

void Class_and_Objects::introduce_class_header()
{
    std::ifstream intro_to_headerfile("Class_and_Objects.h");

    if (intro_to_headerfile.is_open()) {
    std::string myText;
    
    // 3. Read the file line-by-line and print
    while (getline(intro_to_headerfile, myText)) {
        std::cout << myText << "\n";
    }
    
    // 4. Close the file
    intro_to_headerfile.close();
    } else {
        std::cout << "Unable to open file";
    }
}

void Class_and_Objects::introduce_class_definition()
{
    // 1. Open file
    std::ifstream intro_to_headerfile("Class_and_Objects.cpp");

    // 2. check if it is open
    if (intro_to_headerfile.is_open()) {
    std::string myText;
    
    // 3. Read the file line-by-line and print
    while (getline(intro_to_headerfile, myText)) {
        std::cout << myText << "\n";
    }
    
    // 4. Close the file
    intro_to_headerfile.close();
    } else {
        std::cout << "Unable to open file";
    }
}

void Class_and_Objects::setValue(double inValue) // scope resolution operator is used to access the method for definition
{
    mValue = inValue;
}

void Class_and_Objects::setValue(std::string str)
{
    mValue = to_double(str);
}

double Class_and_Objects::to_double(std::string str)
{
    return strtod(str.c_str(), nullptr);
}

Class_and_Objects::Class_and_Objects()
{

}

Class_and_Objects::Class_and_Objects(double value)
{
    mValue = value;
}

Class_and_Objects::Class_and_Objects(std::string str)
{
    mValue = to_double(str.c_str());
}
