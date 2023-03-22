#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[n+1];
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pos;
    cout << "Enter new position: " << endl;
    cin >> pos;
    int value;

    cin >> value;
    if(pos > n+1 || pos< 0)
    {
        cout << "Invalid";
    }
    else
    {
        int j, temp;
        for(j = n-1; j >= pos; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[pos] = value;
        n++;
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

    }
}
