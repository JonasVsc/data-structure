
struct Node {
    int value;
    Node* next;
};

class DynamicStack {
public:
    DynamicStack();
    void shift(int value);
    void pop();
    void print();

private:
    Node* top;
};