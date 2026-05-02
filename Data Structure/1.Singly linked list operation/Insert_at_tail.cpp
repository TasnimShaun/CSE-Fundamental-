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
    void insert_at_tail( Node* &head,int value)
    /*
      Node* newnode = new Node(value);
      if(head == NULL)
      {
      head = newnode;
      return;       // if the list is empty use this 

      Node* temp = head;
    while(temp->next!= NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
      }
    */
 {
    Node* newnode = new Node(value);
    Node* temp = head;
    while(temp->next!= NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
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
    Node* b = new Node(30);
    head->next =a;
    a->next =b;
     insert_at_tail(head,40);
     insert_at_tail(head,50);
     insert_at_tail(head,60);
     print_linked_list(head);

    return 0;
 }