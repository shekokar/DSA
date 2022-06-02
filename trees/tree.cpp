#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class node {
    public:
        int data;
        node *leftChild;
        node *rightChild;

    node(){
        this -> leftChild = NULL;
        this -> rightChild = NULL;
    }
};

node* createTree(node* root)
{
    root = new node();
    int data;
    cout<<"Enter data\n";
    cin>>data;
    if(data == -1)
    return NULL;
    root -> data = data;
    cout<<"For left child\n";
    root -> leftChild = createTree(root->leftChild);
    cout<<"For right child\n";
    root -> rightChild = createTree(root->rightChild);
    return root;
}

void preorder(node* root)
{
    if(root ==  NULL)
        return;
    cout<<root->data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}

void levelorder(node * root)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node *tmp = q.front();
        q.pop();
        if(tmp -> leftChild != NULL)
        {
            q.push(tmp -> leftChild);
        }
        if(tmp -> rightChild != NULL)
        {
            q.push(tmp -> rightChild);
        }
        cout<<tmp -> data<<" ";
    }
}

int main()
{
    node *root;
    root = createTree(root);
    preorder(root);
    return 0;
}
