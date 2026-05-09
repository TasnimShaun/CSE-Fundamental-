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
    myRight  = new Node(r);
    p->left  = myLeft;
    p->right = myRight;

    if(p->left)
    q.push(p->left);
    if(p->right)
    q.push(p->right);
   }
   return root; 
}



void left_side(Node* root)
{
    if(root == NULL)
    return;
    
    if(root->left == NULL && root->right == NULL){
    cout << root->value << " ";
    return;
    }
    if(root->left){
    left_side(root->left);
    cout << root->value << " ";
    }
    else if(root->right){
        left_side(root->right);
        cout << root->value << " ";
    }
}
void root_nodes(Node* root)
{
    if(root == NULL)
    return;
    cout << root->value <<" ";
}
void right_side(Node* root)
{
    if(root == NULL)
    return;
     cout << root->value <<" ";
    if(root->right)
    {
        right_side(root->right);
    }
    else if(root->left){
        right_side(root->left);
    }
}

int main()
{
   Node* root = input_tree();
   left_side(root->left);
    root_nodes(root); 
    right_side(root->right);
    return 0;
}