#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node* left;
    Node* right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* input_tree()
{
   int value;
   cin >> value;
   Node* root;
   if( value == -1)
   root = NULL;
   else
   root = new Node(value);
   queue<Node*>q;
   if(root)
   q.push(root);
   while(! q.empty())
   {
    Node* p = q.front();
    q.pop();
    int l,r;
    cin >> l >> r;
    Node* myLeft, *myRight;
    if(l ==-1)
    myLeft = NULL;
    else
    myLeft = new Node(l);
    if(r == -1)
    myRight = NULL;
    else
    myRight = new Node(r);
    p->left = myLeft;
    p->right = myRight;

    if(p->left)
    q.push(p->left);
    if(p->right)
    q.push(p->right);
   }
   return root; 
}

int sum_except_leaf_nodes(Node* root)
 {
    if (root == NULL) 
        return 0;

    int sum = 0;
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* f = q.front();
        q.pop();
        if((f->left) || (f->right))
        sum += f->value;
        if(f->left)
        q.push(f->left);
        if(f->right)
        q.push(f->right);
   }
        return sum;
 }

int main()
{
   Node* root = input_tree();
     int result = sum_except_leaf_nodes(root);
     cout << result << endl; 
    return 0;
}