#include "Use_First_class.h"
#include <iostream>

void  Use_First_class::display()
{
    printMe pr;
    std::cout << "Hello " << pr.value() << " \n";
}
