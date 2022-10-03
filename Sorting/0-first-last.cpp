#include <bits/stdc++.h>
using namespace std;

void firstandlast(int *arr, int n, int x)
{
    int first = -1, last = -1;
    for (int i = 0; i < n; i++)
    {
        if (x != arr[i])
            continue;

        if (first == -1)
        {
            first = i;
        }
        last = i;
    }
    cout << "first -> " << first << "\nlast -> " << last;
}

int first_(int *arr, int low, int high, int x, int n)
{

    if (high >= low)
    {
        int mid = low + (high - low) / 2;

        if ((arr[mid] == x) && (x > arr[mid - 1] || mid == 0))
            return mid;

        else if (x > arr[mid])
            return first_(arr, (mid + 1), high, x, n);

        else
            return first_(arr, low, (mid - 1), x, n);
    }
    return -1;
}

int last_(int *arr, int low, int high, int x, int n)
{

    if (high >= low)
    {
        int mid = low + (high - low) / 2;

        if ((mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x)
            return mid;

        else if (x < arr[mid])
            return last_(arr, low, mid - 1, x, n);

        else
            return last_(arr, (mid + 1), high, x, n);
    }

    return -1;
}

void firstandlast_log(int *arr, int n, int x)
{
    int low = 0, high = n - 1;
    int first = first_(arr, low, high, x, n);
    int last = last_(arr, low, high, x, n);

    cout << "\nfirst -> " << first << "\nlast-> " << last;
}

int main(void)
{
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int n = sizeof(arr) / sizeof(arr[0]), x = 5;

    firstandlast(arr, n, x);
    firstandlast_log(arr, n, x);
}