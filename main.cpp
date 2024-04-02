
#include "Use_First_class.h"
#include "Use_Second_class.h"
#include "advance_print.h"
#include <iostream>

int main()
{
    Use_First_class class1;
    Use_Second_class class2;
    Advance_print ap;
    
    class1.display();
    class2.display();

    std::cout << ap.value();
}