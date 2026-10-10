#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   while(getline(cin,str))
   {
string doc ;
for( char c : str)
{
    if(c>= 'a' && c<='z')
    { doc +=c;
    }
}
sort(doc.begin(),doc.end());
cout << doc << endl;

   }

    return 0;
}