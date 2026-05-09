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
void insert_at_any_pos(Node* &head,int idx,int value)
{
Node* newnode = new Node(value);
Node* temp = head;
for(int i= 1;i<idx; i++)
{
    temp = temp->next;
}
   newnode->next = temp->next;
   temp->next->prev = newnode;
   temp->next =newnode;
   newnode->prev =temp;
}

void print_forward(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
      Node* head = new Node(10);
      Node* a    = new Node(20);
      Node* tail = new Node(30);
        head->next = a;
        a->prev    = head; 
        a->next    = tail;
        tail->prev = a;
     insert_at_any_pos(head,2,100);
insert_at_any_pos(head,1,500);
    print_forward(head);
    
      
return 0;
}