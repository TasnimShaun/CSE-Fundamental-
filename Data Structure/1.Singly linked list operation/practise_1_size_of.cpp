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
    
     void print_linked_list(Node* head)
 {
    Node* temp = head;
     int count =0;
    while(temp != NULL)
    {
        count++;
       // cout << "count" << endl;
       
         temp =temp->next;
    }
    cout <<  count << endl;
 }
     int main()
 {
    Node* head = NULL;
    Node* tail =NULL;
    
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
    print_linked_list(head);
    return 0;
 }