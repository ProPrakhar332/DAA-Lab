#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &v, int l, int r, int key)
{
    int mid, result = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (v[mid] == key)
        {
            result = 1;
            break;
        }
        else if (v[mid] > key)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, count = 0, key;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        cin >> key;
        sort(v.begin(), v.end());
        for (int i = n - 1; i > 0; i--)
        {
            count += BinarySearch(v, 0, i - 1, v[i] - key);
        }
        cout << count << endl;
    }
    return 0;
}
