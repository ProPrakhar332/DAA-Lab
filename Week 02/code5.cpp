#include <bits/stdc++.h> 
using namespace std;

bool findSequence(int arr[], int n)
{
    if (n < 3)
        return false;
    int i, j, k;
    //arr[i]+arr[j]==arr[k] -> arr[i]+arr[j]-arr[k]==0
    for (k = n - 1; k > 1; k--)
    {
        i = 0, j = k - 1;
        while (i < j)
        {
            if (arr[i] + arr[j] - arr[k] == 0)
            {
                cout << i + 1 << ", " << j + 1 << ", " << k + 1 << endl;
                return true;
            }
            else if (arr[i] + arr[j] - arr[k] > 0)
                j--;
            else
                i++;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (!findSequence(arr, n))
            cout << "No Sequence Found";
    }
    return 0;
}