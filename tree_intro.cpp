
#include <iostream>
using namespace std;

class BinaryTree{
    public:
    int data;
    BinaryTree* left;
    BinaryTree* right;
    
    BinaryTree(int val){
        data =val;
        left= NULL;
        right =NULL;
    }
};


int main() {
    BinaryTree* root=new BinaryTree(1);
    root->left=new BinaryTree(2);
    root->right= new BinaryTree(3);
    root->left->left=new BinaryTree(4);
    root->left->right=new BinaryTree(5);
    root->right->left=new BinaryTree(6);
    root->right->right=new BinaryTree(7);
    
    cout<<root->data<<endl;
    cout<<root->left->data<<" "<<root->right->data<<endl;
    cout<<root->left->left->data<<" "<<root->left->right->data<<" "<<root->right->left->data<<" "<<root->right->right->data<<endl;

    return 0;
}
