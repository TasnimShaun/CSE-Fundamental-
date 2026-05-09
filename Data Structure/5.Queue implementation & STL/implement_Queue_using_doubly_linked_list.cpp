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
        this->next  = NULL;
        this->prev  = NULL;
    }
};
class myQueue
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int si_ze =0;

    void push(int value)    // O(1)
    {   si_ze++;

        Node* newNode = new Node(value);

        if( head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev =tail;
        tail = newNode;
    
    }
    void pop()         // O(1)
    {   
        si_ze--;
       Node* deletenode = head;
       head->next = head; 
        delete deletenode;
        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }

    int front()        // O(1)
    {
        return head->value;
    }

    int back()         // O(1)
    {
        return tail->value;
    }

    int size()         // O(1)
    {
        return si_ze;
    }

    bool empty()
    {
        return head == NULL;
    }
    
};

int main()
{
    myQueue q;
    int n ;
    cin >> n;
    for(int i=0; i<n;i++)
    {
        int value;
        cin >> value;
        q.push(value);

    }
    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    
    return 0;
}