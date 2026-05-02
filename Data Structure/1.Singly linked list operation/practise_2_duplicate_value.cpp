#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value;
    Node* next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
 };
    void insert_at_tail( Node* &head,Node* &tail,int value)
    {
      Node* newnode = new Node(value);
      if(head == NULL)
      {
      head = newnode;
      tail = newnode;
      return;       // if the list is empty use this 
      }
      
    tail->next = newnode;
    tail = tail->next;
    // tail = newnode;
      }
 void find_duplicate_value(Node* &head,int val)
 {
    vector<int> freq(val+5,0);
     Node* temp = head;
    while(temp != NULL)
    {
        freq[temp->value]++;
        temp = temp->next;

    }
    bool duplicate = false;
    for(int i=0;i<=val;i++)
    {
        if(freq[i]>1)
        {
            cout << "YES" <<" ";
            duplicate = true;
        }
    }
        if(!duplicate){
            cout << " NO" << endl;
       }
    

 }
     int main()
 {
    Node* head = NULL;
    Node* tail = NULL;
    
    int value;
    while(true)
    {
        cin >> value;
        if(value == -1)
        {
            break;
        }
        insert_at_tail(head,tail,value);
    }
    int val;
    
    find_duplicate_value(head,val);
    return 0;
 }