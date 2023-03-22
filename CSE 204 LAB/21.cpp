#include <bits/stdc++.h>
using namespace std;
int main()
{

   cout << "Enter number of students: ";
   int n;
   cin >> n;
   float arr[n+1];
   for(int i = 1; i <= n; i++)
   {
       cin >> arr[i];
   }
   int k;
   float max = -999;
   for(int i = 1; i <= n; i++)
   {
       if(arr[i] > max)
       {
           max = arr[i];
            k = i;
       }
   }
   cout << "The max cgpa was " << max << ", achieved by student num " << k;
}
