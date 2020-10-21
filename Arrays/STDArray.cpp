#include "Arrays.hpp"

template<int SIZE>
void xtremeMaths(array<int, SIZE>& array);

int main()
{
    // Single-line Initialization
    array<int, 5> arr = { 1, 2, 3, 4, 5 };
    arr.at(0) = 6;
    for(int i = 0; i < arr.size(); i++)
        arr[i] = i + 2;
    //for(int i = 0; i < array.size(); i++)
    //    cout << array[i] << " ";

    // Loop Initialization
    array<int, 10> arr2;
    for(int i = 0; i < arr2.size(); i++)
        arr2.at(i) = i - 1;

    // Passing to a function
    cout << "Before function: ";
    for(int i = 0; i < arr2.size(); i++)
        cout << arr2.at(i) << " ";
    cout << "\n";
    xtremeMaths(arr2);
    cout << "Outside function: ";
    for(int i = 0; i < arr2.size(); i++)
        cout << arr2.at(i) << " ";
    cout << "\n";
}
template<int SIZE>
void xtremeMaths(array<int, SIZE>& arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if(i == 0)
            arr.at(i) = arr.at(i + 1) * 4 - 26;
        else
            arr.at(i) = arr.at(i - 1) * 4 - 26;
    }

    cout << "In function: ";
    for(int i = 0; i < arr.size(); i++)
        cout << arr.at(i) << " ";
    cout << "\n";
}
