#include <bits/stdc++.h>
using namespace std;

int find_first(int arr[], int lo, int hi, int x)

{
    int mid;

    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        if (arr[mid] < x)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return lo;
}
int find_last(int arr[], int lo, int hi, int x)
{
    int mid;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        if (arr[mid] <= x)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    if (arr[lo] == x)
        return lo;
    return hi;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int m = 1;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Case"
             << " " << m << ":"
             << "\n";
        m++;
        while (q--)
        {
            int a, b;
            cin >> a >> b;
            int j, k;
            j = find_first(arr, 0, n - 1, a);
            k = find_last(arr, 0, n - 1, b);
            // cout << j << " " << k << endl;
            cout << k - j + 1 << "\n";
        }
    }
}