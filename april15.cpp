#include <bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
int val;
TreeNode* left;
TreeNode* right;

TreeNode(int val){
    this->val=val;
    this->left=NULL;
    this->right=NULL;
}

};


TreeNode* takeinput(){

int data;
cin>>data;


if(data==-1){
    return NULL;
}

TreeNode* root=new TreeNode(data);
queue<TreeNode*> q;
q.push(root);

while(!q.empty()){
    TreeNode* front=q.front();
    q.pop();
    int leftChild;
    cin>>leftChild;
    if(leftChild!=-1){
        TreeNode* child=new TreeNode(leftChild);
        front->left=child;
        q.push(child);
    }

     int rightChild;
    cin>>rightChild;
    if(rightChild!=-1){
        TreeNode* child=new TreeNode(rightChild);
        front->right=child;
        q.push(child);
    }


}

return root;



}

int main(){

    TreeNode* root=takeinput();
}