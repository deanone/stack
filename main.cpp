#include "Stack.h"
#include <iostream>

/*! Driver program for my custom stack implementation. */
int main(int argc, char* argv[])
{
    int start = 0;
    std::cout << "Element " << start << " inserted in the stack.\n";

    Stack* stack = new Stack(start);

    for (int i = 1; i <= 10; i++)
    {
        stack->push(10*i);
        std::cout << "Element " << 10 * i << " inserted in the stack.\n";
    }

    std::cout << "\n";

    while (!stack->empty())
    {
        std::cout << "Element " << stack->top() << " removed from the stack.\n";
        stack->pop();
    }

    return 0;
}