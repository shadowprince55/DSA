//User function Template for C++

/*// A Tree node
struct Node
{
	int key;
	struct Node *left, *right;
};*/

class Solution
{
    public:
    
    void solve(Node* root, int sum, vector<vector<int>>&ans, vector<int>t,int v){
        if(!root)
            return;
        
        v+=root->key;
        t.push_back(root->key);
        if(v==sum)
            ans.push_back(t);
        solve(root->left, sum, ans, t, v);
        solve(root->right, sum, ans, t, v);
        v -= root->key;
        t.pop_back();
        return;
    }
    
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        //code here
        vector<vector<int>> ans;
        vector<int>t;
        int v=0;
        solve(root, sum, ans, t, 0);
        return ans;
    }
};
