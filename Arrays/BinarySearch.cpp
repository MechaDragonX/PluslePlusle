#include "Arrays.hpp"

template<int SIZE>
void binSearch(array<int, SIZE>& arr, int target);

int main()
{
    array<int, 5> arr { 1, 2, 3, 4, 5 };
    int result = binSearch(arr, 2);
    cout << result << endl;
}
template<int SIZE>
int binSearch(array<int, SIZE>& arr, int target)
{
    int min = 0;
    int max = arr.size() - 1;
    while(min <= max)
    {
        int mid = (min + max) / 2;
        if(arr[mid] < target)
            min = mid + 1;
        else if(arr[mid] > target)
            max = mid - 1;
        else
            return mid;
    }
    return - (min + 1);
}
