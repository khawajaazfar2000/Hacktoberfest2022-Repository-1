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
void levelOrderTraverse(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* a= q.front();
        q.pop();

        if(a == NULL){
            // previous level complete traverse
            cout<<endl;
            if(!q.empty()){
                //still have some child nodes
                q.push(NULL);
            }
        }
        else{
            cout<< a ->data<<" ";
            if(a->left){
                
                q.push(a->left);
            }
            if(a->right){
                
                q.push(a->right);
            }

        }
    }
}




int main(){
    node* root = NULL;
    //creating tree
    root = buildTree(root);

    //level Order
    cout<< "Printing the levelorder traversal output"<<endl;
    levelOrderTraverse(root);
    return 0;
}
