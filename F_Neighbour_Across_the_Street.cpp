#include <bits/stdc++.h> 

using namespace std;
double find(double x, double y, double mid) 
{
    double h1 = sqrt(x*x-mid*mid); 
    double h2 = sqrt(y*y-mid*mid); 
    return (h1*h2)/(h1+h2);
}

int main() 
{
     int k = 0;
    int t; 
    cin >> t; 
    while(t--) 
    {  
        double x, y, c;
        cin >> x >> y >> c;
        double low, high, mid; 
        low = 1; high = min(x,y); 
        while(low < high) 
        {
            mid = low+(high-low)/2;
            double c2 = find(x, y, mid); 
            if(abs(c2-c) <= 0.000001) break;
            else if(c2 > c) low = mid;
            else high = mid; 

        } 
        cout << "Case " << ++k << ": ";
        cout << fixed << setprecision(12) << mid << "\n";   

    }
}