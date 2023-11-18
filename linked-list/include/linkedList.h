#include"element.h"


class LinkedList {
public:
    LinkedList();
    void printFirst();
    void insert(int value);
    void remove();

    void print();
private:
    Element* first;
};