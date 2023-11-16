#include<iostream>
#include"stack.h"



Stack::Stack(int size_) :size(size_), stack(new int[size_]), index(0) 
{
    std::cout << "New Stack Created!\n";
    std::cout << "This Stack Support " << size << " Elements!\n";

    for(int i = 0; i < size; i++) {
        stack[i] = 0;
    }
}

void Stack::insert(int item)
{
    if(isFull()) {
        std::cout << "Stack is Full!\n";
    } else {
        stack[index] = item;
        index++;
    }
}

void Stack::remove()
{
    if(isEmpty()) {
        std::cout << "Stack is Empty!\n";
    } else {
        index--;
        stack[index] = 0;
    }
    
}

bool Stack::isFull()
{
    if(index == size)
        return true;
    return false;
}

bool Stack::isEmpty()
{
    if(index == 0)
        return true;
    return false;
}

void Stack::printStack()
{
    for(int i = 0; i < size; i++) {
        std::cout << stack[i] << " ";
    }
    std::cout << std::endl;
}