#ifndef __CLASS_AND_OBJECT__
#define __CLASS_AND_OBJECT__

#include <iostream>
#include <fstream>
#include <string>

class Class_and_Objects // class definition begins with keyword class and class name
{
    // below are the members of the calss both its functions/methods and data members. 
    // Each object can access only its instance

    public: // Access control specifiers : public allows access to all
        Class_and_Objects();    // default constructor
        Class_and_Objects(double value);    // overloaded constructor
        Class_and_Objects(std::string str);
        void setValue(double inValue);  // function members
        void setValue(std::string str);
        double getValue() const;    // const keyword dosnt allow the function to change its object
        double to_double(std::string str);
        void introduce_class_header();
        void introduce_class_definition();

    private: // private ristricts access of its members to only for its instances
        double mValue = 0;  // data members can be initialized
        std::string mString;

    protected:
        static int count;   // a static variable is shared between all instances of class

};  // the class definition must end with semicolon

#endif // __CLASS_AND_OBJECT__