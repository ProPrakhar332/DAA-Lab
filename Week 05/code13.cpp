#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count;
        char ch = 'a';
        cin >> n;
        char arr[n];
        int alpha[26] = {0};
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
            alpha[arr[i] - 97]++;
        count = alpha[0];
        for (int i = 1; i < 26; i++)
            if (alpha[i] > count)
            {
                count = alpha[i];
                ch = i + 97;
            }
        if (count > 1)
            cout << ch << " - " << count << endl;
        else
            cout << "No Duplicates Present\n";
    }
    return 0;
}
