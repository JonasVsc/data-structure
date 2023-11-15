#include<iostream>
#include"stack.h"



Stack::Stack(int size_) :size(size_), stack(new int[size_]) 
{
    std::cout << "New Stack Created!\n";
    std::cout << "This Stack Support " << size << " Elements!\n";
}