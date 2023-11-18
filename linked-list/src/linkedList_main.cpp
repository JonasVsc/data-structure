#include<iostream>
#include"linkedList.h"

int main()
{
    LinkedList linkedList;
    while (true)
    {
        char option;
        int value;
        std::cout
        << "[0] - Imprimir\n"
        << "[1] - Inserir\n"
        << "[2] - Remover\n\n";

        std::cin >> option;
        std::cout << std::endl;
        switch (option)
        {
        case '0':
            linkedList.print();
            break;
        case '1':
            std::cout << "Value: ";
            std::cin >> value;
            linkedList.insert(value);
            std::cout << std::endl;
            break;
        case '2':
            linkedList.remove();
        default:
            break;
        }
    }
    system("pause");
    return 0;
}