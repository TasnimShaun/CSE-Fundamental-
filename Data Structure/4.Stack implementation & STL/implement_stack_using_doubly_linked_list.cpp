#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node* next;
    Node* prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack 
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int si_ze = 0;
     void push(int value)
     {
        si_ze++;
        Node* newNode = new Node(value);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
     }
     void pop()
     {
        si_ze--;
       Node* deleteNode = tail;
       tail = tail->prev ;
       delete deleteNode;
       
       if(tail == NULL)
         { 
            head = NULL;
            return;
         }
         tail->next = NULL;
     }
     int top()
     {
        return tail->value;  // O(1)
     }
    int size()
    {
        return  si_ze; // O(1)
    }
    bool empty()
    {
       return head == NULL; // O(1)
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