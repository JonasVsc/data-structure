
struct Node {
    int value;
    Node* next;
};

class DynamicStack {
public:
    DynamicStack();
    ~DynamicStack();
    void shift(int value);
    int pop();
    void print();
    bool isEmpty();
    bool isFull();

private:
    Node* top;
};