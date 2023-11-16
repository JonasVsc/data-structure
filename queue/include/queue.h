typedef int Item;

const Item max_size = 5;

class Queue {
public:
    Queue();
    ~Queue();
    void insert(Item i);
    void remove();
    bool isEmpty();
    bool isFull();
    void printQueue();
private:
    Item* queue;
    int first, last;
};