#include<iostream>
#include<queue>
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

void preorder(BinaryTree * root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(BinaryTree * root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void postorder(BinaryTree * root){
		if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
void levelorder(BinaryTree *root){
		if(root==NULL){
			return;
		}
	queue<BinaryTree*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		BinaryTree* node=q.front();
		q.pop();
		if(node!=NULL){
			cout<<node->data<<" ";
			if(node->left){
				q.push(node->left);
			}
			if(node->right){
				q.push(node->right);
			}
			else if(!q.empty()){
				q.push(NULL);
			}
		}
	}
}




int main(){
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
    
    cout<<"preorder traversal : ";
    preorder(root);
    cout<<endl;
    cout<<"postorder traversal : ";
    postorder(root);
    cout<<endl;
    cout<<"inorder traversal : ";
    inorder(root);
    cout<<endl;
    cout<<"levelorder traversal : ";
    levelorder(root);
    cout<<endl;
	return 0;
}
