#include<bits/stdc++.h>
using namespace std;
class myStack 
{
    public:
    vector<int> v;
     void push(int value)
     {
        v.push_back(value); // O(1)
     }
     void pop()
     {
        v.pop_back(); // O(1)
     }
     int top()
     {
        return v.back(); // O(1)
     }
    int size()
    {
        return v.size(); // O(1)
    }
    bool empty()
    {
       return v.empty(); // O(1)
    }
};

int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    if(! st.empty())
    cout << st.top() << endl;
    if(! st.empty())
    st.pop();
    return 0;
}