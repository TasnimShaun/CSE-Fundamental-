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
void insert_at_tail(Node* &head,Node* &tail, int value)
{
        Node* newnode = new Node(value);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev= tail;
        tail = newnode;


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
     insert_at_tail(head,tail,100); 
    print_forward(head);
    
      
return 0;
}