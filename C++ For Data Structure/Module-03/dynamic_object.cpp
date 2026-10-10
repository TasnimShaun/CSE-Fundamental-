#include<bits/stdc++.h>
using namespace std;

class Student
{
   public :
   int roll;
   int cls;
   double gpa;
     Student(int roll,int cls,double gpa) // if i use same variable
    {
      
       (*this).roll =roll; // use pointer dereferance
       (*this).cls = cls;
       (*this).gpa = gpa;

    }

};
int main()
{
   Student rahim( 34,10,4.94);
   Student* karim = new Student(2,10,5.00);
   cout << rahim.roll << " "<< rahim.cls << " "<< rahim.gpa << endl;
   cout << (*karim).roll << " "<< (*karim).cls << " "<< (*karim).gpa << endl;
     return 0; 
}