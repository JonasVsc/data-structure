#include<iostream>
#include"queue.h"


int main () {
    char option;
    int item;

    Queue queue;
    while(true)
    {
        std::cout
        << "[0] Exit "
        << "[1] Insert "
        << "[2] Remove"
        << "[3] Print Queue\n";
        std::cin >> option;
        switch (option)
        {
            case '0':
                return 0;
                break;
            case '1':
                std::cin >> item;
                queue.insert(item);
                break;
            case '2':
                queue.remove();
            case '3':
                queue.printQueue();
                break;
            default:
                break;
        }
    }
    


    system("pause");
    return 0;
}