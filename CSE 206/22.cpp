#include <bits/stdc++.h>

using namespace std;
class point {
public:
    int x, y;
    void Distance(point p1, point p2)
    {
        float d= sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
        cout << d;
    }

};

int main()
{
    point p1, p2,p;
    int x, y;
    cin >> x >> y;
    p1.x = x;
    p1.y = y;
    cin >> x >> y;
    p2.x = x;
    p2.y = y;
    p.Distance(p1, p2);
}
