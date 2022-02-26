#include "Stack.h"
#include "Node.h"

Stack::Stack(int data)
{
    stackTop = new Node(data);
}

Stack::~Stack()
{
    if (stackTop != nullptr)
    {
        delete stackTop;
    }
}

bool Stack::empty()
{
    return stackTop == nullptr;
}

void Stack::push(int data)
{
    Node* node = new Node(data);
    node->next = stackTop;
    stackTop = node;
}

int Stack::top()
{
    int data = stackTop->data;
    return data;
}

void Stack::pop()
{
    stackTop = stackTop->next;
}