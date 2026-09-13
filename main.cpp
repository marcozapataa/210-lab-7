#include <iostream>
#include <string>

using namespace std;

string* reverseArray(string* arr, int size);
void displayArray(string* arr, int size);

int main()
{

    return 0;
}

//Function definiton for reverseArray
string* reverseArray(string* arr, int size)
{
    string* start = arr;
    string* end = arr + size - 1;

    while (start < end)
    {
        swap(*start, *end)
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