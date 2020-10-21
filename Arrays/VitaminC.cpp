#include "Arrays.hpp"

void xtremeMaths(int *array, const int length);

int main()
{
	// Single-line Initialization
	int array[5] { 1, 2, 3, 4, 5 };
	array[0] = 2;
	for(int i = 0; i < 5; i++)
		array[i] = i + 2;
	// for(int i = 0; i < 5; i++)
    //     cout << array[i] << " ";
	// cout << endl;

	// Loop Initialization
	int array2[10];
	for(int i = 0; i < 10; i++)
		array2[i] = i + 3;
	for(int i = 0; i < 10; i++)
        cout << array2[i] << " ";
	cout << endl;
	
	// Passing to a function
    cout << "Before function: ";
    for(int i = 0; i < 10; i++)
        cout << array2[i] << " ";
    cout << endl;
    xtremeMaths(array2, 10);
    cout << "Outside function: ";
    for(int i = 0; i < 10; i++)
        cout << array2[i] << " ";
    cout << endl;
}
void xtremeMaths(int *array, const int length)
{
    for(int i = 0; i < length; i++)
    {
        if(i == 0)
            array[i] = array[i + 1] * 4 - 26;
        else
            array[i] = array[i - 1] * 4 - 26;
    }

    cout << "In function: ";
    for(int i = 0; i < length; i++)
        cout << array[i] << " ";
    cout << endl;
}
