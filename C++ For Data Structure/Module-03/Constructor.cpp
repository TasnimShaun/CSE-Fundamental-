#include<bits/stdc++.h>
using namespace std;

class Student
{
   public :
   int roll;
   int cls;
   double gpa;
     Student(int r,int c,double g)
    {
       roll = r; 
       cls = c;
       gpa = g;

    }

};
int main()
{
   Student rahim( 34,10,4.94);
   Student karim(2,10,5.00);
   cout << rahim.roll << " "<< rahim.cls << " "<< rahim.gpa << endl;
   cout << karim.roll << " "<< karim.cls << " "<< karim.gpa << endl;
     return 0; 
}