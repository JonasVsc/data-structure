#include<iostream>
#include"stack.h"


int main() 
{
    Stack stack(5);
    char option;
    int item;
    while(true)
    {
        std::cout 
        << "[0] Exit\n"
        << "[1] Insert\n"
        << "[2] Remove\n"
        << "[3] Print\n\n";
        std::cin >> option;
        switch (option)
        {
            case '0':
                return 0;
            case '1':
                std::cin >> item;
                stack.insert(item);
                break;
            case '2':
                stack.remove();
                break;
            case '3':
                stack.printStack();
                break;
            default:
                break;
        }
    }
    

    system("pause");
    return 0;
}