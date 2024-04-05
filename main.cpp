
#include "Use_First_class.h"
#include "Use_Second_class.h"
#include "Use_boost.h"

// not : though the boost is included in Use_boost lib, in the Cmakelist we have linked it to project
//so in this file, we can user boost
//using namespace boost::filesystem;

#include <iostream>

int main()
{
    Use_First_class class1;
    Use_Second_class class2;
    Use_Boost class3;

    class1.display();
    class2.display();
    class3.doesExists("/jenkins");

}