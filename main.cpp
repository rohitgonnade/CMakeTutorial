
#include "Use_First_class.h"
#include "second_library.h"
#include "advance_print.h"
#include <iostream>

int main()
{
    Use_First_class class1;
    Second_Library sL;
    Advance_print ap;
    
    class1.display();

    std::cout << "2 Multiply by 10 = " << sL.mutiply_by_10(2) << " \n";
    std::cout << ap.value();
}