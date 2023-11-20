//Given a binary tree and an integer K. Find the number of paths in the tree which have their sum equal to K.
A path may start from any node and end at any node in the downward direction.
Since the answer may be very large, compute it modulo 109+7.//


  class Solution{
  public:
    unordered_map<int,int>mp;
    
    void solve(Node* root, int k, int sum, int& ans)
    {
        if(!root) return;
        
        sum += root->data;
        ans += mp[sum-k];
        mp[sum]++;
        
        solve(root->left,k,sum,ans);
        solve(root->right,k,sum,ans);
        
        mp[sum]--;
    }
    int sumK(Node *root,int k)
    {
        int ans = 0;
        mp[0] = 1;
        solve(root,k,0,ans);
        return ans;
    }
};
