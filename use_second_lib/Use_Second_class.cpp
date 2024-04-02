#include "Use_Second_class.h"

#include <iostream>

void Use_Second_class::display()
{    
    Second_Library sL;
    std::cout << "2 Multiply by 10 = " << sL.mutiply_by_10(2) << " \n";
}