#include <bits/stdc++.h>



using namespace std;



//int find(int b, int a[], int low, int high)
//{   int mid, ans, f;
//
//    while (low <= high)
//    {
//
//    mid = low+(high-low)/2;
//
//    if(b == a[mid])
//    { return mid;
//    f = 1;
//    }
//
//    if (b > a[mid])
//    {low = mid+1;
//    ans = low;
//    }
//
//    else if (b < a[mid])
//    {high = mid-1;
//    ans = high;
//
//    }
//    }
//
//    return ans;
//
//
//
//}

int main()
{
    int n;
    cin >> n;

    int a[n+1];
    int i;
    for(i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    while(q--)
    {
        int b;
        cin >> b;
//      int k = find(b, a, 1, n);
//      cout << k;


     int low=1, high=n, f = 0, mid, ans;
       while(low <= high)
       {
           mid = low+(high-low)/2;

    if (b == a[1])
    {
        f = 1;
        ans = 1;
        break;
    }
    if(b == a[mid])
    { ans = mid;
    high = mid -1;
    f = 1;
    }

    if (b > a[mid])
    {
        low = mid+1;

    }

    else if (b < a[mid])
    {
        high = mid-1;
        if(b > a[mid-1])
        {
            ans = mid;
            break;
        }

    }
    }
    // ans = mid;
    if (f == 0) cout << "No" << " " << ans << "\n";
    else if (f==1) cout << "Yes" << " " << ans << "\n";

    }
}
