#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left ;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;

    }
};
node* buildTree(node* root){
    int data;
    cout<<"Enter data: "<<endl;
    cin >> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of "<< data<<endl;
    root-> left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<< data<<endl;
    root-> right = buildTree(root->right);
}

void inorder(node* root){
    if(root == NULL){// LNR
        return ;
    }
    cout<<root-> data <<endl;
    preorder(root->left);
    preorder(root->right);
}

void preorder(node* root){
    if(root == NULL){// NLR
        return ;
    }
    cout<<root-> data <<endl;
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root == NULL){// LRN
        return ;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root-> data <<endl;
}


int main(){
    node* root = NULL;
    //creating tree
    root = buildTree(root);
    cout<<"inoredr traversal is : ";
    inorder(root);

    cout<<"postorder traversal is : ";
    postorder(root);

    cout<<"preorder traversal is : ";
    preorder(root);
    return 0;
}
