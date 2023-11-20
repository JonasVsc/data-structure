#include<iostream>
#include"hash_table.h"

int spreading(data value);

HashTable::HashTable()
    :keys(new data [size])
{
    for(auto i = 0; i < size; i++)
    {
        keys[i] = 0;
    }
}

void HashTable::insert(data value)
{
    keys[spreading(value)] = value;
}

void HashTable::remove(data value)
{
    if(search(value))
    {
        keys[spreading(value)] = 0;
    }
}

bool HashTable::search(data value)
{
    return (keys[spreading(value)] == value);
}

void HashTable::printTable()
{
    std::cout << "Table: \n";
    for(auto i = 0; i < size; i++)
    {
        std::cout << i << ": [ " << keys[i] << " ]\n";
    }
    std::cout << std::endl;
}


HashTable::~HashTable()
{
    delete [] keys;
}


int spreading(data value)
{
    return (value % 10);
}