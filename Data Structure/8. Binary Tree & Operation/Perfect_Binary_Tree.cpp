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
int count_nodes(Node* root)
{
if(root== NULL)
    return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l+r+1;
}
int maximum_depth(Node* root)
{
    if(root== NULL)
    return 0;
    int l = maximum_depth(root->left);
    int r = maximum_depth(root->right);
    return max(l,r)+1;
}
int main()
{
   Node* root = input_tree();
    int x = maximum_depth(root);
    int y = count_nodes(root);
    int base = 2;
    int exponent = x;
    double result= pow(base,exponent);
    int total_num_of_nodes =result-1;
    if(y == total_num_of_nodes)
    cout << "YES" << endl;
    else 
    cout << "NO" << endl;

   
    return 0;
}