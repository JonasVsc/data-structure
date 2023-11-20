#include<iostream>
#include"dynamic_queue.h"


int main()
{
    DynamicQueue queue;
    char option;
    data item;

    while(true)
    {
        std::cout 
        << "[0] - Print Queue\n"
        << "[1] - Insert\n"
        << "[2] - Remove: ";

        std::cin >> option;

        switch(option)
        {
        case '0':
            queue.printQueue();
            break;
        case '1':
            std::cin >> item;
            queue.insert(item);
            break;
        case '2':
            queue.remove();
        }


    }

    system("pause");
    return 0;
}