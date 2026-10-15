#include<bits/stdc++.h>
using namespace std;
int main()
{

string s ="hello";
cin  >> s;
cout << s[4] << endl; // specific index print ( useful)
cout << s.at(1) << endl; // use function for specific index 
cout << s[s.size()-1] << endl; //if i not use back fun, for last elements of string
cout << s.back() << endl; // last characture of string (useful)
cout << s.front () << endl; // first characture of string 

return 0;

}
