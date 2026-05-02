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
      
      
    tail->next = newnode;
    tail = tail->next;
    // tail = newnode;
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
    Node* tail =b;

    head->next =a;
    a->next =b;
     insert_at_tail(head,tail,40);
     insert_at_tail(head,tail,50);
      insert_at_tail(head,tail,60);
     print_linked_list(head);
    cout << "Tail:" << tail->value << endl;
    return 0;
 }