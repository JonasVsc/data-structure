#include<iostream>
#include"dynamic_queue.h"

DynamicQueue::DynamicQueue()
    :head(nullptr), tail(nullptr)
{}

void DynamicQueue::insert(data item)
{
    Node* newNode;
    if(isEmpty())
    {
        newNode = new Node;
        newNode->item = item;
        newNode->link = nullptr;
        head = newNode;
        tail = newNode;
    }
    else
    {
        if(!isFull())
        {
            newNode = new Node;
            newNode->item = item;
            newNode->link = nullptr;
            tail->link = newNode;
            tail = newNode;
        }
        else
        {
            std::cout << "Full Memory!\n";
        }
    }
}

void DynamicQueue::remove()
{
    Node* temp;
    if(!isEmpty())
    {
        temp = head->link;
        delete head;
        head = temp;
        delete temp;
    }
    else
    {
        std::cout << "Queue is Empty!\n";
    }
}

bool DynamicQueue::isFull()
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
        return true;
    }
}

bool DynamicQueue::isEmpty()
{
    return (head == nullptr);
}

void DynamicQueue::printQueue()
{
    Node* temp = head;
    std::cout << "Queue: [ ";
    while(temp != nullptr)
    {
        std::cout << temp->item << " ";
        temp = temp->link;
    }
    std::cout << "]\n";
    delete temp;
}

DynamicQueue::~DynamicQueue()
{
    Node* temp = head;
    while(temp != nullptr)
    {
        temp = head->link;
        delete head;
        head = temp;
        delete temp;
    }
    tail = nullptr;
    head = nullptr;
}