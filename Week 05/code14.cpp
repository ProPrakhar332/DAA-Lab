#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &v, int l, int r, int key)
{
    int mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (v[mid] == key)
            return mid;
        else if (v[mid] > key)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, a, k, key;
        cin >> n;
        vector<int> v;
        for (i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        cin >> key;
        sort(v.begin(), v.end());
        for (i = 0; i < n - 1; i++)
        {
            k = BinarySearch(v, i + 1, n - 1, key - v[i]);
            if (k != -1)
                break;
        }
        if (k != -1)
            cout << v[i] << " " << v[k] << endl;
        else
            cout << "No Such Element Exist\n";
    }
    return 0;
}
