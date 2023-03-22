#include <bits/stdc++.h>
using namespace std;


class student
{
public:
    int id;
    float cgpa;
    int waiver()
    {
        if(cgpa >= 3.8) return 1;
        else
            return 0;
    }
};
int linear_search(student b[], int key, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(key == b[i].id) return i;

    }
    return -1;
}
int main()
{
    int n, res, roll, i = 0, choice;
    cout << "Enter total number of students: ";
    cin >> n;
    student s1[n];
    while(1)
    {

       cout<<"\n\nMenu: \n1.Enter Student Data\n2.Search Student Data\n3.Exit\nEnter Choice: ";
       cin >> choice;
       if(choice == 1)
       {
           if(i >= n) break;
           else
           {
               cout<<"\n\nEnter ID of student "<<i+1 <<": ";
               cin >> s1[i].id;
               cout<<"\nEnter CGPA of student "<<i+1 <<": ";
               cin >> s1[i].cgpa;
              cout<<"\n"<<s1[i].id<<" has CGPA: " << s1[i].cgpa;
              res= s1[i].waiver();
              if(res==1) cout << "Congrats";
                else cout << "Sorry :((";
              i++;

           }
       }
       else if (choice == 2)
       {
           cout << "Search for an ID\n";
           cin >> roll;
           int m = linear_search(s1, roll, n);
           if(m != -1) cout << "\nID "<<roll<<" was found, CGPA: " <<s1[m].cgpa;
           else if(m == -1)  cout<<"\nThe ID was not found";
       }
       else
    {
        exit:
        cout<<"\n\nC++ Program Terminated\n"<<endl;
        break;
        return 0;
    }

    }

}
