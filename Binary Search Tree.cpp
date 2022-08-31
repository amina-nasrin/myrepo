#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* leftChild;
    Node* rightChild;
};

class BinarySearchTree{

    public:    
    Node* insert(Node* root, int x){
        if(root == NULL){
            root = GetNewNode(x);
        } else if(x <= root->data){
            root->leftChild = insert(root->leftChild, x);
        } else {
            root->rightChild = insert(root->rightChild, x);
        }
        return (root);
    }

    Node* GetNewNode(int data){
        Node* createNode = new Node();
        createNode->data = data;

        createNode->leftChild = NULL;
        createNode->rightChild = NULL; 

        return createNode;
    }

    void p(Node* root){
        if(root!=NULL){
            p(root->leftChild);
            cout<<root->data<<endl;
            p(root->rightChild);
        } else{

        cout<<"d";
        return;
        }
    }
};

int main(){
    Node* root;
    root = NULL;


    BinarySearchTree bst;
    
    bst.insert(root, 10);
    bst.insert(root, 2);
    bst.insert(root, 50);
    bst.insert(root, 1);
    bst.insert(root, 22);
    bst.insert(root, 1);

    bst.p(root);

}