#include <bits/stdc++.h> 
using namespace std; 
namespace emp1 
{
    int a = 10;
    void print() 
    {
        cout << "Hello";
    }
}
namespace emp2
{
    int a = 50;
    void print() 
    {
        cout << "H";
    }
}
int main() 
{
    emp2::print();
    cout << emp1::a;
}
