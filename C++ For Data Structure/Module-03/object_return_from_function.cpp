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
Student fun()
{
   Student karim(2,10,5.00); 
   return karim;
}
int main()
{
   Student obj =fun();
   
   cout << obj.roll << " "<< obj.cls << " "<< obj.gpa << endl;
     return 0; 
}