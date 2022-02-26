#ifndef STACK_H
#define STACK_H

class Node;

class Stack
{
    Node* stackTop;

public:
    /*!
     * Constructor. 
     */
    Stack(int data);

    /*!
     * Destructor.
     */
    ~Stack();

    bool empty();
    void push(int data);
    int top();
    void pop();
};

#endif  // STACK_H