#include<bits/stdc++.h>
using namespace std;
int main ()
{
int a;
cin >> a;
int array[a];
for( int i = 0; i<a;i++)
{
cin >> array[i];

}
int Max= INT_MIN;

for( int i = 0; i<a;i++)
{
  Max= max(array[i],Max);
}
cout << Max << endl;
}