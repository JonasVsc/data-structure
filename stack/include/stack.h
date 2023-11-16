
class Stack {
public:
    Stack(int size_);
    void insert(int item);
    void remove();
    bool isFull();
    bool isEmpty();
    void printStack();
private:
    int size;
    int index;
    int* stack;
};