#include<bits/stdc++.h>
using namespace std;
int main ()
{
string  s1 = "hello world";
string s2 = " Eaaaarth";
//s1+=s2; // useful for add string
// s1.append(s2);
//s1.push_back(' a'); // add  just one  character last 
//s1.pop_back(); // reduce one chracter in last
//s1.pop_back();
//s1.pop_back();
//s1 = "gello";
//s1 =s2;
//s1.assign(s2);
//s1.erase(3,5); // delete character
//s1.replace(6,0,"Bangladesh"); 
/*  starting number of index , 
number of index i deleted,
 then replace string */
 s1.insert(5,"people");
cout << s1 << endl;
 return 0;
}