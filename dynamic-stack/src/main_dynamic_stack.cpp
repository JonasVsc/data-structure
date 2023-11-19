#include<iostream>
#include"dynamic_stack.h"

int main()
{
    DynamicStack stack;


    char option;
    int value;
    while(true)
    {
        std::cout 
        << "[0] - Shift\n"
        << "[1] - Pop\n"
        << "[2] - Print Stack\n\n";
        std::cin >> option;
        switch (option)
        {
        case '0':
            std::cout << "Value: ";
            std::cin >> value;
            stack.shift(value);
            break;
        case '1':
            std::cout << "Pop: " << stack.pop() << std::endl;
            break;
        case '2':
            stack.print();
        default:
            break;
        }
    }

    

    system("pause");
    return 0;
}