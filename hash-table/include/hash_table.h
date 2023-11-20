typedef int data;

const data size = 10;

class HashTable {
public:
    HashTable();
    void insert(data value);
    void remove(data value);
    bool search(data value);
    void printTable();
    ~HashTable();

private:
    data* keys;
};