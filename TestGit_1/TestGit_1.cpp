#include <iostream>
#include "TestClass.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Hello World!\n";

    TestClass a;
    a.setValue(3);
    std::cout << "a = " << a.getValue() << std::endl;
    a.doubleMult();
    std::cout << "a = " << a.getValue() << std::endl;
    system("pause");
}