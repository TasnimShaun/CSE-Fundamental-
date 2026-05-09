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
      Node* head = NULL;
      Node* tail = NULL;
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
    print_forward(head);
    
      
return 0;
}