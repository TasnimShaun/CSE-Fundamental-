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
void insert_at_head(Node* &head,Node* &tail, int value)
{
        Node* newnode = new Node(value);
        if(head == NULL)
      {
      head = newnode;
      tail = newnode;
      return;       
      }
        newnode->next = head;
        head->prev = newnode;
        head = newnode;


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
      insert_at_head(head,tail, 50);
      insert_at_head(head,tail, 60);
      insert_at_head(head, tail,70);
      insert_at_head(head,tail, 80);  
      insert_at_head(head,tail, 90);

    print_forward(head);
    
    
return 0;
}