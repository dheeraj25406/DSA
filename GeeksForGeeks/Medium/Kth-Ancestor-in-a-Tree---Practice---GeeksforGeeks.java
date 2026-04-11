# Kth Ancestor in a Tree | Practice | GeeksforGeeks

- Platform: GeeksForGeeks
- URL: https://www.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/0
- Difficulty: Medium
- Language: JavaScript
- Status: Accepted
- Runtime: N/A
- Memory: N/A
- Solved At: 2026-04-11T19:19:03.802Z

## Code
```
/*
Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node *left, *right;
};
*/
// your task is to complete this function
class Solution {
  public:
    Node* solve(Node* root,int &k,int node){
        if(!root)   return NULL;
        if(root->data==node)    return root;
        Node* l=solve(root->left,k,node);
        Node* r=solve(root->right,k,node);
        if(l && !r){
            k--;
            if(k<=0){
                k=INT_MAX;
                return root;
            }
            return l;
        }
        else if(!l && r){
            k--;
            if(k<=0){
                k=INT_MAX;
                return root;
            }
            return r;
        }
        return NULL;

    }

    int kthAncestor(Node *root, int k, int node) {
        // Code here
```