#include<iostream>
#include"dynamic_stack.h"

DynamicStack::DynamicStack()
{
    top = nullptr;
}

DynamicStack::~DynamicStack()
{
    Node* temp;
    while(top->next != NULL)
    {
        temp = top;
        top = top->next;
        delete temp;
    }
    delete top;
}

void DynamicStack::shift(int value)
{
    if(!isFull())
    {
        Node* temp = new Node;
        temp->value = value;
        temp->next = top;
        top = temp;
    }
}


int DynamicStack::pop()
{
    if(!isEmpty())
    {
        Node* temp = top;
        int val = temp->value;
        top = top->next;
        std::cout << "Temp: " << temp << std::endl;
        std::cout << "Top: " << top << std::endl;
        delete temp;
        return val;
    }
    std::cout << "Stack is empty!\n";
    return 0;
}

void DynamicStack::print()
{
    Node* temp = top;
    std::cout << "Stack: [ ";
    while (temp != nullptr)
    {
        std::cout << temp->value << " ";
        temp = temp->next;
    }
    std::cout << "]\n";
    
}

bool DynamicStack::isEmpty()
{
    return (top == nullptr);
}

bool DynamicStack::isFull()
{
    Node* temp;
    try
    {
        temp = new Node;
        delete temp;
        return false;
    }
    catch(std::bad_alloc exception)
    {
        std::cout << "Full Memory!\n";
        return true;
    }
    
}