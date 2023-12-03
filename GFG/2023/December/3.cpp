// https://www.geeksforgeeks.org/problems/brothers-from-different-root/1

class Solution
{
public:
    
    
    void append_first(Node* root, unordered_set<int>&s1){
        if(root==NULL)
            return; 
        s1.insert(root->data);
       append_first(root->left,s1);
       append_first(root->right,s1);
    }
    
    void append_second(Node* root, unordered_set<int>&s2){
            if(root==NULL)
            return;
        s2.insert(root->data);
        append_second(root->left, s2);
        append_second(root->right, s2);
    }
    
    

    int countPairs(Node* root1, Node* root2, int x)
    {
        Node* first = root1;
        Node* second = root2;
        unordered_set<int> s1,s2;
        append_first(first,s1);
        append_second(second,s2);
        
        int ans=0;
        for(int elem:s2){
            if(s1.find(x-elem)!=s1.end())
                ans++;
        }
            
        return ans;
    }
};
