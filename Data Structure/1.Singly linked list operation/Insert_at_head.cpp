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
   /*if(head == NULL)
      {
      head = newnode;
      tail = newnode;
      return;       // if the list is empty use this 
      }*/
   newnode->next =head;
   head =newnode;
 }
     void print_linked_list(Node* head)
 {
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->value<< endl;
        temp = temp->next;
    }
 }
     int main()
 {
    Node* head = new Node(10);
    Node* a =new Node(20);
    Node* tail = new Node(30);
    head->next =a;
    a->next =tail;

    insert_at_head(head,100);
    insert_at_head(head,200);
    insert_at_head(head,300);
    insert_at_head(head,400);
    print_linked_list(head);

    return 0;
 }