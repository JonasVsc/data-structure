#include<iostream>
#include"dynamic_stack.h"

int main()
{
    DynamicStack stack;

    stack.shift(20);
    stack.shift(20);

    stack.print();

    system("pause");
    return 0;
}