// find the height of binary tree
#include<iostream>
using namespace std;
// function 
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

    int height(node* node1){
        //base case 
        if(node == NULL){
            return 0;
        }

        left = height(node1->left);
        right = height(node1-> right);
    }
    

};



}
