#include<bits/stdc++.h>
using namespace std;
int main()
{
string s= "hello world ";
cout << s.size() << endl;
cout << s.max_size() << endl; // 10^6
cout << s.capacity() << endl; // increase capacity
//s.clear() ; // clear string 
// cout << s.size() ; // sure that string is empty
if (s.empty()==true)
{
cout << "Empty";
}
else{
cout << "Not empty\n" ;   
}
s.resize(14,'x'); // resize string 
cout << s <<endl;
    return 0;
}