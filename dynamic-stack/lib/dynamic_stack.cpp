#include<iostream>
#include<cstddef>
#include"dynamic_stack.h"

DynamicStack::DynamicStack()
{
    top = NULL;
}

void DynamicStack::shift(int value)
{
    Node* node = new Node;
    node->value = value; 
    node->next = top;
    top = node;
}

void DynamicStack::print()
{
    Node* temp = new Node;
    temp = top;

    while (temp != NULL)
    {
        std::cout << temp->value << " ";
        temp = temp->next;
    }
    std::cout << "\n";
    
}