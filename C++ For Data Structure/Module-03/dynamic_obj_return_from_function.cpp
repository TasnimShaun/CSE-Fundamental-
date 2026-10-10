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
Student* fun()
{
   Student* karim =new Student(2,10,5.00); 
  
   return karim;
}
int main()
{
   Student* p =fun();
   
   cout << (*p).roll << " "<< (*p).cls << " "<< (*p).gpa << endl;
     return 0; 
}