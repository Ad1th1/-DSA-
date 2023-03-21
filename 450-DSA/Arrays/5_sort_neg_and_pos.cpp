#include <iostream>
using namespace std;

void moveneg(int *a, int n)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (a[l] < 0)
            l++;
        else if (a[r] >= 0)
            r--;
        else
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
}

int main()
{
    int arr[] = {2, 4, -6, 8, -5, -10};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveneg(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
