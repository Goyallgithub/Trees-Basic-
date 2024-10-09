
// levelwise creation of binary tree
#include <iostream>
#include <queue>
using namespace std;

    class Node {
        public:
        int data;
        Node*left;
        Node*right;

    
    Node (int value){
    
        data = value;
        left = NULL;
        right = NULL;
    }

};

int main ()
{
    queue <Node*> q;
    Node* root = new Node(5);
    q.push(root);

    while(!q.empty())
    {
        Node * temp = q.front();
        q.pop();
        //left
        cout<<"Enter the left child of  "<<temp->data<<endl;
        int first,second;
        cin >> first;
        if (first !=-1)
        {
            temp->left = new Node(first);
            q.push(temp->left );
        }

        cout<< "Enter the right value "<<temp->data<<endl;
        cin >>second;
        if (second !=-1){
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }

}

