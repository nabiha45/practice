#include <bits/stdc++.h>
float m = -999;

using namespace std;

class student
{
public:
    int id;
    float cgpa;

};

float find_max(student s1[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(s1[i].cgpa >= m)
        {
            m = s1[i].cgpa;

        }

    }
    return m;
}


int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    student s1[n];
    for(int i = 0; i < n; i++)
    {
        cin >> s1[i].id >> s1[i].cgpa;
    }
    float maximum = find_max(s1, n);
   // cout << maximum;

    for(int i = 0; i < n; i++)
    {
        if(maximum == s1[i].cgpa)
        {
            cout << "The max cgpa is " << s1[i].cgpa << "and the ID is " << s1[i].id << endl;
            break;
        }
    }
}
