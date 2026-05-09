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
void level_order(Node* root,int level )
{
    if(root == NULL)
    {
        cout << "NO TREE" << endl;
        return;
    }
    queue <Node*> q;
    q.push(root);
    int crrnt_level = 0;
    while(! q.empty())
    {   int sz =q.size();
    if(crrnt_level == level)
    {
        for(int i =0; i<sz;i++){
    
       Node* f = q.front();
       q.pop(); 
       cout << f->value <<" ";
    }
    cout << endl;
    return;
    }
    for(int i=0; i<sz;i++)
    {
        Node* f = q.front();
        q.pop();
       if(f->left)
       q.push(f->left);
       if(f->right)
       q.push(f->right);
    }
    crrnt_level++;
}
cout << "Invalid" ;
}
int height(Node* root)
{
    if (root == NULL)
    return 0 ;
    int l = height(root->left);
    int r = height(root->right);
    return max(l,r)+1;
}



int main()
{
   Node* root = input_tree();
   int x;
   cin >> x;
     int max_level = height(root);
     
     if( x > max_level || x<0){
        cout << "Invalid"<<endl;
     }else{
        level_order(root,x);
     }
    //cout <<max_level;
    return 0;
}