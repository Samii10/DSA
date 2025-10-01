#include<iostream>
#include<vector>
using namespace std;

class Node{
public:

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

static int index=-1;
Node* Buildtree(vector<int> preorder){

    index++;
    if(preorder[index]==-1){
        return NULL;
    }

    Node* root= new Node(preorder[index]);
    root->left= Buildtree(preorder);
    root->right=Buildtree(preorder);

    return root;
}

void Preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);

}

int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=Buildtree(preorder);
    cout<<"Root is: "<<root->data<<endl;
    Preorder(root);
    cout<<endl;
    return 0;
}
