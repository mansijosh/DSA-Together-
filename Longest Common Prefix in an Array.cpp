/*Given an array of N strings, find the longest common prefix among all strings present in the array.*/


class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string s = arr[0];
        for (int i=1; i<N; i++){
            string ans ="";
            
            for(int j=0; j<arr[i].size(); j++){
                if(arr[i][j] == s[j] && j<s.size()){
                    ans += arr[i][j];
                }
                else
                break;
            }
            s = ans;
        }
        if(!s.empty())
        return s;
        return "-1";
    }
};
