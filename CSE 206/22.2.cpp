#include <bits/stdc++.h>
using namespace std;

class point
{
public:
    float s1, s2, s3;

    float area()
    {
        float peri = (s1+s2+s3)/2;
        float a = sqrt(peri*(peri-s1)*(peri-s2)*(peri-s3));
        cout << a;
    }

};

int main()
{
    point p;
    float x, y, z;
    cin >> x >> y >> z;
    p.s1 = x;
    p.s2 = y;
    p.s3 = z;

    p.area();



}
