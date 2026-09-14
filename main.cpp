#include <iostream>
#include <string>

using namespace std;

string* reverseArray(string* arr, int size);
void displayArray(string* arr, int size);

int main()
{
    // initialize size of array
    int SIZE = 5;

    //create dynamic string array and populate with names
    string* namesArray = new string[SIZE];
    *(namesArray + 0) = "Ward";
    *(namesArray + 1) = "Skye";
    *(namesArray + 2) = "May";
    *(namesArray + 3) = "Coulson";
    *(namesArray + 4) = "Fitz";

    //display original array
    cout << "Original array: ";
    displayArray(namesArray, SIZE);

    reverseArray(namesArray, SIZE);

    //display reversed array
    cout << "Reversed array: ";
    displayArray(namesArray, SIZE);

    //delete allocated memory
    delete[] namesArray;

    
    return 0;
}

//Function definiton for reverseArray
string* reverseArray(string* arr, int size)
{
    string* start = arr;
    string* end = arr + size - 1;

    while (start < end)
    {
        swap(*start, *end);
        start++;
        end--;
    }
    return arr;
}

//Function definition for displayArray
void displayArray(string* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}