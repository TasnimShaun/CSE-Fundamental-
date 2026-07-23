#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int tetranacci_arry[n+1];
    tetranacci_arry[0] = 0;
    tetranacci_arry[1] = 1;
    tetranacci_arry[2] = 1;
    tetranacci_arry[3] = 2;
    
    for(int i=4;i<=n;i++)
    {
        tetranacci_arry[i] = tetranacci_arry[i-1] + tetranacci_arry[i-2] + tetranacci_arry[i-3] + tetranacci_arry[i-4];

    }
    cout << tetranacci_arry[n];
    return 0;
}