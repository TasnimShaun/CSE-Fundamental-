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

    void insert_at_head( Node* &head,int value)
   {

     Node* newnode = new Node(value);
     newnode->next =head;
     head =newnode;

   }

    void insert_at_tail( Node* &head,Node* &tail,int value)
    {
      Node* newnode = new Node(value);
      if(head == NULL)
      {
      head = newnode;
      tail = newnode;
      return;      
      }
      
      tail->next = newnode;
      tail = tail->next;
     // tail = newnode;
      }

    void insert_at_any_pos( Node* &head,int idx,int value)

     {
     Node* newnode = new Node(value);
     Node* temp = head;
     for(int i=1 ;i<idx;i++)
     {
        temp = temp->next;
     }
     newnode->next = temp->next; 
     temp->next = newnode;

 }
      
      int size_linked_list(Node* head)

 {
     int count=0;
     Node* temp = head;
     while(temp != NULL)
     {
        count ++;
        temp = temp->next;
     }
     return count;
  }
    
     void print_linked_list(Node* head)
{
       Node* temp = head;
      while(temp != NULL)
       {
        cout << temp->value<<" ";
        temp = temp->next;
       }
      cout << endl;
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
    int idx;
    while( cin >> idx >>value )
    {
        int sz = size_linked_list(head);
        if(idx > sz)
        {
            cout << "Invalid\n";
            continue;
        }
        else if( idx == sz)
        {
            insert_at_tail(head,tail,value);
        }
        else if( idx == 0)
        {
            insert_at_head(head,value);
        }
        else 
        {
            insert_at_any_pos(head,idx,value);
        }
    
       print_linked_list(head);
     }
       return 0;
 }