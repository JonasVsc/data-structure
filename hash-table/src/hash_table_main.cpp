#include<iostream>
#include"hash_table.h"




int main()
{
    HashTable table;
    char option;
    data value;

    while(true)
    {
        std::cout
        << "[0] - Print\n"
        << "[1] - Insert\n"
        << "[2] - Remove\n"
        << "[3] - Search\n\n" ;
        std::cin >> option;

        switch(option)
        {
        case '0':
            table.printTable();
            break;
        case '1':
            std::cout << "Insert: ";
            std::cin >> value;
            table.insert(value);
            break;
        case '2':
            std::cout << "Remove: ";
            std::cin >> value;
            table.remove(value);
            break;
        case '3':
            std::cout << "Search: ";
            std::cin >> value;
            if(table.search(value))
            {
                std::cout << "Elemento encontrado \n";
            }
            else
            {
                std::cout << "Elemento nao encontrado \n";
            }
            break;
        }
    }

    table.printTable();
    system("pause");
    return 0;
}