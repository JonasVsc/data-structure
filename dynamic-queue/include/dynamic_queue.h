typedef int data;

struct Node
{
    data item;
    Node* link;
};

class DynamicQueue {
public:
    DynamicQueue();
    void insert(data item);
    void remove();
    bool isFull();
    bool isEmpty();
    void printQueue();
    ~DynamicQueue();
private:
    Node* head;
    Node* tail;
};