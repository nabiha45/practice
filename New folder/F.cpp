#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, y, z;
    cin >> x >> y >> z;
    if ( x < y && z == 0)
    {
        cout << "-";
    }
    else if (x > y && z == 0)
    {
        cout << "+";
    }
    else if (x == y && z == 0)
    {
        cout << "0";
    }
    else if (x > y && y == 0 && (y+z >! x || y+z != x))
    {
        cout << "+";
    }
     else if (x < y && (x+z >! y || x + z != y))
    {
        cout << "-";
    }
    else if (x == y && z >= 1)
    {
        cout << "?";
    }
    if (z >= 1 && x != y)
    {
        if (x+z > y && x < y)
        {
            cout << "+";
        }
        else if (y+z > x && y < x)
        {
            cout << "-";
        }
        else if (x + z == y || y + z == x)
        {
            cout << "?";
        }


    }
    return 0;
}


