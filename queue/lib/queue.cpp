#include<iostream>
#include"queue.h"

Queue::Queue() : queue{new Item[max_size]}, first{0}, last{0}
{

}

Queue::~Queue()
{
    delete [] queue;
}

void Queue::insert(Item i)
{
    if(isFull())
        return;
    queue[last] = i;
    last++;
    if(last > max_size)
        last = 0;
}

void Queue::remove()
{
    if(isEmpty())
        return;
    queue[first] = 0;
    first++;
    if(first > max_size)
        first = 0;
}

bool Queue::isEmpty()
{
    return (last == first);
}

bool Queue::isFull()
{
    return (last - first == 5 || last - first == -5);
}

void Queue::printQueue()
{
   for(int i = 0, j = first; i < max_size; i++, j++)
   {
        if(j > max_size)
            j = 0;
        std::cout << queue[j] << " ";
   }
   std::cout << std::endl;
}