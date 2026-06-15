#include <iostream>
using namespace std;

void walk_iterative(int steps);
void walk_recursive(int steps);

int main()
{

    // recursion = a programming technique where a function calls itself
    // in order to solve a problem into a repeateable single step

    // The advantages of recursion include:
    // Simplicity: Recursive code can be more elegant and easier to understand, especially for problems that have a natural recursive structure (e.g., tree traversal, factorial calculation).

    // The disadvantages of recursion include:
    // Performance: Recursive functions can be less efficient than iterative solutions due to the overhead of multiple function calls and the potential for stack overflow if the recursion depth is too large.

    // Stack overflow occurs when the call stack exceeds its limit, which can happen with deep recursion. This can lead to a program crash.

    // In this example, we will both iterative and recursive approaches to count the number of steps taken

    // Iterative approach
    walk_iterative(5);

    // Recursive approach
    walk_recursive(5);

    return 0;
}

void walk_iterative(int steps)
{
    for (int i = 0; i < steps; ++i)
    {
        cout << "You took a step" << endl;
    }
}

void walk_recursive(int steps)
{
    // A recursive function must always have a
    // 1. base case that stops the recursion, and
    // 2. recursive case that breaks the problem into smaller subproblems.

    // In this example, the base case is when steps is 0 or less, at which point the function will stop calling itself.
    // The recursive case is when steps is greater than 0, where the function will print a message and then call itself with steps decremented by 1.

    if (steps > 0) // Base case
    {
        cout << "You took a step" << endl;
        walk_recursive(steps - 1); // Recursive case
    }
}
