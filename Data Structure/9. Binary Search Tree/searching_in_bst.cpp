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
    if(value== -1)
     root = NULL;
     else
      root = new Node(value);
      queue<Node*> q;
      if( root != NULL)
      q.push(root);
      while(! q.empty())
      {
        Node* p =q.front();
        q.pop();
        int l,r;
        cin >> l >> r;
        Node* myleft,* myright;
        if(l ==-1)
        myleft =NULL;
        else
        myleft =new Node(l);
        if(r == -1)
        myright = NULL;
        else
        myright = new Node(r);
        p->left = myleft;
        p->right= myright;
        if(p->left)
        q.push(p->left);
        if(p->right)
        q.push(p->right);
      }
      return root;

}
bool search(Node* root,int value)
{
        if(root == NULL)
        return false;
        if(root->value == value)
        return true;
        if(root->value > value)
        return search(root->left,value);
        else
        return search(root->right,value);

}
int main()
{
    Node* root = input_tree();
    int value;
    cin >> value;
    if(search(root,value))
    cout <<"Found";
    else
    cout << "Not Found";
    return 0;
}

