
#include "print.h"
#include "second_library.h"
#include "advance_print.h"
#include <iostream>

int main()
{
    printMe printMe;
    Second_Library sL;
    Advance_print ap;
    std::cout << "Hello " << printMe.value() << " \n";
    std::cout << "2 Multiply by 10 = " << sL.mutiply_by_10(2) << " \n";
    std::cout << ap.value();
}