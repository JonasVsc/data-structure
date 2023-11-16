
class Stack {
public:
    Stack(int size_);
    ~Stack();
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