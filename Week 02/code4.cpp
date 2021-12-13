#include<bits/stdc++.h>

using namespace std;

int modifiedBinarySearch(vector < int > & v, int l, int r, int key, char choice) {
        int mid, result = -1;
        while (l <= r) {
                mid = l + (r - l) / 2;
                if (v[mid] == key) {
                        result = mid;
                        if (choice == 'l') r = mid - 1;
                        else l = mid + 1;
                } else if (v[mid] > key)
                        r = mid - 1;
                else l = mid + 1;
        }
        return result;
}

int main() {
        int t;
        cin >> t;
        while (t--) {
                int n, a, l, r, key;
                cin >> n;
                vector < int > v;
                for (int i = 0; i < n; i++) {
                        cin >> a;
                        v.push_back(a);
                }
                cin >> key;
                l = modifiedBinarySearch(v, 0, n - 1, key, 'l');
                r = modifiedBinarySearch(v, 0, n - 1, key, 'r');
                if (l == -1)
                        cout << "Key Not Present\n";
                else
                        cout << key << " - " << (r - l + 1) << endl;
        }
        return 0;
}