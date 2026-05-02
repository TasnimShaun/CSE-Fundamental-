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
    insert_at_any_pos(head,2,100);
    
    print_linked_list(head);

    return 0;
 }