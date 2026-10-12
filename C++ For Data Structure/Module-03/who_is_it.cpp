#include<bits/stdc++.h>
using namespace std;

class Student
{
    public :
    int id;
    string name;
    char section;
    int total_marks;

};
int main() {
    int t;
     cin >> t;


 while (t--) {
        Student best_Student;
        bool first = true; 

        for (int i = 0; i < 3; i++) {
            Student current_Student;
            cin >> current_Student.id >> current_Student.name >>
             current_Student.section >> current_Student.total_marks ;

            if (first || 
                current_Student.total_marks > best_Student.total_marks || 
                (current_Student.total_marks == best_Student.total_marks && current_Student.id < best_Student.id)) {
                best_Student = current_Student;
                first = false;
            }
        }
        cout << best_Student.id << " " << best_Student.name << " " << best_Student.section << " " << best_Student.total_marks << endl;
    }

    return 0;
}


