#include <iostream>
using namespace std;

int factorial_iterative(int num);
int factorial_recursive(int num);

int main()
{
    // factorial = the product of an integer and all the integers below it
    // factorial of 5 (5!) = 5 * 4 * 3 * 2 * 1 = 120

    // Iterative approach
    cout << "Iterative: " << factorial_iterative(5) << endl;

    // Recursive approach
    cout << "Recursive: " << factorial_recursive(5) << endl;

    return 0;
}

int factorial_iterative(int num)
{
    int result = 1;
    for (int i = 1; i <= num; ++i)
    {
        result = result * i;
    }
    return result;
}

int factorial_recursive(int num)
{
    if (num > 1)
    {
        return num * factorial_recursive(num - 1);
    }
}