#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int l, int r, int &compare, int &shifts)
{
    int i, j, temp;
    for (i = l + 1; i <= r; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0)
        {
            compare++;
            if (arr[j] < temp)
                break;
            arr[j + 1] = arr[j];
            shifts++;
            j--;
        }
        arr[++j] = temp;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, compare = 0, shifts = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        InsertionSort(arr, 0, n - 1, compare, shifts);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\ncomparisons = " << compare << endl;
        cout << "shifts = " << shifts << endl;
    }
    return 0;
}
