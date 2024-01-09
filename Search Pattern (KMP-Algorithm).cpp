/*Given two strings, one is a text string, txt and other is a pattern string, pat. The task is to print the indexes of all the occurences of pattern string in the text string. Use one-based indexing while returing the indices. 
Note: Return an empty list incase of no occurences of pattern. Driver will print -1 in this case.*/


class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here
            vector<int> ans;
        int n = txt.size();
        int m = pat.size();
        
        if(n<m){
            return {-1};
        }
        
        for (int i=0; i<n-m+1; i++){
            if(txt[i] == pat[0]){
                if(txt.substr(i,m) == pat){
                    ans.push_back(i+1);
                }
            }
        }
        return ans;
        }
     
};
