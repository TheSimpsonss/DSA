#include <iostream>
using namespace std;

class Node
{

    int data;
    Node *next;

    // constructor
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

int main()
{
    // Stack memory
    // Node first = 12;

    // Dynamic memory
    Node *first = new Node(10);
}