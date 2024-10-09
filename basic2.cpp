// using recursion left wise node first 
#include <iostream>
using namespace std;

class Node 
{   public:
    int data;
    Node*right;
    Node*left;

    Node (int value){
        data = value;
        right = left = NULL;
    }
};
//NLR

    
//return type of our program is node pointer
Node* BinaryTree()
{
    // first time will be root node 
     int x;
     cin >>x;
     if (x==-1){
        return NULL;
     }
     Node * temp = new Node(x);

    //left
    cout << "Enter the left child of "<<x<<endl;
    temp-> left = BinaryTree();

    //right
    cout << "Enter the right child of "<<x<<endl;
    temp-> right = BinaryTree();
    return temp;
}

int main () {
    cout << "Enter the Root Node ";
    Node * root;
    root = BinaryTree();
    PreOrder(root);
}

// Changinffffffffffff