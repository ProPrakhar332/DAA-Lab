#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int r)
{
    srand(time(0));
    int pivot = rand() % (r - l + 1) + l;
    int i = l - 1, j = l;
    swap(arr[pivot], arr[r]);
    pivot = arr[r];
    while (j <= r)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    return i;
}

int KthElement(int arr[], int l, int r, int k)
{
    int p;
    if (l <= r)
    {
        p = partition(arr, l, r);
        if (p == k - 1)
            return p;
        else if (p > k - 1)
            return KthElement(arr, l, p - 1, k);
        else
            return KthElement(arr, p + 1, r, k);
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, kth;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> k;
        if (k > 0 && k <= n)
        {
            kth = KthElement(arr, 0, n - 1, k);
            cout << arr[kth] << endl;
        }
        else
            cout << "Not Present" << endl;
    }
    return 0;
}
