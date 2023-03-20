// Find the "Kth" max and min element of an array 

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {5, 3, 9, 1, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    nth_element(arr, arr + k - 1, arr + n, greater<int>());
    cout << k << "th maximum element is " << arr[k - 1] << endl;

    nth_element(arr, arr + k - 1, arr + n);
    cout << k << "th minimum element is " << arr[k - 1] << endl;

    return 0;
}
