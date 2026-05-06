#include<bits/stdc++.h>
using namespace std;
class myStack 
{
    public:
    list<int> li_st;
     void push(int value)
     {
       li_st .push_back(value); // O(1)
     }
     void pop()
     {
        li_st.pop_back(); // O(1)
     }
     int top()
     {
        return li_st.back(); // O(1)
     }
    int size()
    {
        return li_st.size(); // O(1)
    }
    bool empty()
    {
       return li_st.empty(); // O(1)
    }
};
int main()
{
    myStack st;
    int n ;
    cin >> n ;
    for(int i =0; i <n; i++)
    {
        int x; 
        cin >> x;
        st.push(x);
    }
    while(! st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}
