#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
int a,b;
cin >> a >> b;
/* if (a>b)
cout << a << endl;
else 
cout << b << endl;
*/

cout << min({2,4,7,9,78,9}) <<endl; // use built-in function
cout << max(a,b) << endl;
/* int temp = a;
a = b;
b = temp;
*/
swap(a,b); // use built-in function
cout << a << " " << b<< endl ;
return 0;
}