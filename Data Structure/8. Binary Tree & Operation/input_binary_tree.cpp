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

void level_order(Node* root)
{
    if(root == NULL)
    {
        cout << " NO TREE" << endl;
        return;
    }
    queue<Node*> que;
    que.push(root);
    while(! que.empty())
    {
        Node* f = que.front();
        que.pop();
        cout << f->value << " ";
        if(f->left)
        que.push(f->left);
        if(f->right)
        que.push(f->right);
    }

}
int main()
{
   Node* root = input_tree();
   level_order(root); 
    return 0;
}