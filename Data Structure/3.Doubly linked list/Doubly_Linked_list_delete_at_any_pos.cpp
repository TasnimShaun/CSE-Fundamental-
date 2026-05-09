#include<bits/stdc++.h>
using namespace std;class Node
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
void delete_at_any_pos(Node* &head,int idx)
{ 
Node* temp = head;
for(int i =1;i<idx;i++)
{
    temp = temp->next;
}
Node* deleteNode =temp->next;
temp->next = temp->next->next;  //deleteNode->next;
temp->next->prev = temp;
delete deleteNode;
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
     Node* a = new Node(20);
      Node* tail= new Node(30);
        head->next = a;
        a->prev= head; 
        a->next = tail;
        tail->prev =a;

       delete_at_any_pos(head,1);
       print_forward(head);
    
    
return 0;
}