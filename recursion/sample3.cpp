#include <iostream>
using namespace std;

void countfrequency(int inputarray[], int frequencyarray[], int size, int index) {

    if (size == index) // Base case. When do we stop the recursion?
    {
        return;
    }

    int currentelement = inputarray[index]; // Get the current element from the input array

    frequencyarray[currentelement]++; // Set the frequency of the current element to 1

    countfrequency(inputarray, frequencyarray, size, index + 1); // Recursive case
}

int main() {

    const int size = 9;

    int input_array[size] = {1, 2, 2, 3, 4, 4, 4, 5, 5};

    int frequency_array[10] = {0}; 

    countfrequency(input_array, frequency_array, size, 0);

    for (int i = 0; i < size; i++){

        if (frequency_array[i] > 0)
        { // Only print numbers that appear at least once
            cout << i << " appears " << frequency_array[i] << " times." << endl;
        }
    }

    return 0;
}

