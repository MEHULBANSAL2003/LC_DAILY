#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode *takeinput()
{

    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    TreeNode *root = new TreeNode(data);
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode *front = q.front();
        q.pop();
        int leftChild;
        cin >> leftChild;
        if (leftChild != -1)
        {
            TreeNode *child = new TreeNode(leftChild);
            front->left = child;
            q.push(child);
        }

        int rightChild;
        cin >> rightChild;
        if (rightChild != -1)
        {
            TreeNode *child = new TreeNode(rightChild);
            front->right = child;
            q.push(child);
        }
    }

    return root;
}

void printinorder(TreeNode *root)
{
    if (!root)
        return;
    printinorder(root->left);
    cout << root->val << " ";
    printinorder(root->right);
}

void dfs(TreeNode *root, int val, int depth, int curdepth)
{
    if (root == NULL)
    {
        return;
    }
    if (curdepth == depth - 1)
    {
        TreeNode *exleftchild = root->left;
        TreeNode *exrightchild = root->right;
        TreeNode *newleftchild = new TreeNode(val);
        TreeNode *newrightchild = new TreeNode(val);
        root->left = newleftchild;
        newleftchild->left = exleftchild;

        root->right = newrightchild;
        newrightchild->right = exrightchild;
    }
    dfs(root->left, val, depth, curdepth + 1);
    dfs(root->right, val, depth, curdepth + 1);
}
TreeNode *addOneRow(TreeNode *root, int val, int depth)
{
    if (depth == 1)
    {
        TreeNode *newnode = new TreeNode(val);
        newnode->left = root;
        return newnode;
    }

    dfs(root, val, depth, 1);

    return root;
}

int main()
{

    TreeNode *root = takeinput();
    // printinorder(root);
    int val, depth;
    cin >> val >> depth;
    root = addOneRow(root, val, depth);
    printinorder(root);

    return 0;
}