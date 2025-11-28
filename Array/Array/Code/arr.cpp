#include <iostream>
using namespace std;

int maxElement(int arr[], int n)
{
    int max = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}
int main()
{
    int arr[] = {4, 32, 8, 12, 65};
    int size = sizeof(arr) / sizeof(arr[0]);
    // cout << size;
    cout << maxElement(arr, size) << endl;
}