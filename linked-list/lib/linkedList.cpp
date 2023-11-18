#include<iostream>
#include"linkedList.h"




LinkedList::LinkedList() 
{
    first = new Element;
    first->value = 20;
    first->linkedElement = NULL;
}

void LinkedList::insert(int value)
{
    Element* temp = new Element;
    temp = first;
    while(temp->linkedElement != NULL)
    {
        temp = temp->linkedElement;
    }
    temp->linkedElement = new Element;
    temp->linkedElement->value = value;
    temp->linkedElement->linkedElement = NULL;
}

void LinkedList::remove()
{
    Element* temp = new Element;
    Element* pointerTemp = temp;
    temp = first;
    while(temp->linkedElement != NULL)
    {
        pointerTemp = temp->linkedElement;
        temp = temp->linkedElement;
    }
    pointerTemp->linkedElement = NULL;
    temp = NULL;
    delete pointerTemp->linkedElement;
    delete temp;
    

    
}

void LinkedList::print()
{
    Element* temp = new Element;
    temp = first;
    while (true)
    {
        std::cout << temp->value << " ";
        if(temp->linkedElement != NULL)
        {
            temp = temp->linkedElement;
        } else {
            break;
        }
    }
    std::cout << std::endl;
    std::cout << std::endl;
}