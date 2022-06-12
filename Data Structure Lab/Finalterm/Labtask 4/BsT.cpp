#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int value;
        Node* left;
        Node* right;

        Node(){
            left = NULL;
            right = NULL;

        }
};

class BST{
    public:
        Node* root;

        BST(){
            root = NULL;
        }

        void Insert(int a){
            Node* bc = new Node();
            bc->value = a;
            if(root==NULL){
                root = bc;
            }
            else{
                Node* parent;
                Node* child;

                parent = root;
                child = root;

                while(child != NULL){
                    parent = child;
                    if(a>parent->value){
                        child = parent->right;
                    }
                    else{
                        child = parent->left;
                    }
                }

                Node* nn = new Node();
                nn->value = a;
                if(a>parent->value){
                    parent->right=nn;
                }
                else{
                    parent->left=nn;
                }
            }

        }
        void Print(){
                queue<Node*> nodes;
                nodes.push(root);
                while(!nodes.empty()){
                    Node* temp = nodes.front();
                    cout<< temp->value<< " ";
                    nodes.pop();
                    if(temp->left != NULL)
                        nodes.push(temp->left);
                    if(temp->right != NULL)
                        nodes.push(temp->right);
                }

        }

};

int main(){
    BST pq;

    pq.Insert(10);
    pq.Insert(31);
    pq.Insert(64);
    pq.Insert(12);
    pq.Insert(23);
    pq.Insert(53);
    pq.Insert(78);
    pq.Insert(22);

    pq.Print();

    return 0;


}
