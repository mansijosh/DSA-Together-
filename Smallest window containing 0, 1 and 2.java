/*Given a string S consisting of the characters 0, 1 and 2. Your task is to find the length of the smallest substring of string S that contains all the three characters 0, 1 and 2. If no such substring exists,
then return -1.*/


class Solution {
    public int smallestSubstring(String S) {
        // Code here
        int zero = -1, one = -1, two = -1, res = 100001;
        
        for(int i=0; i< S.length(); i++){
            if(S.charAt(i)=='0') zero=i;
            if(S.charAt(i)=='1') one=i;
            if(S.charAt(i)=='2') two=i;
            
            
            if(zero==-1 || one ==-1 || two==-1) continue;
            
            int min = Math.min(Math.min(one,two),zero);
            int max = Math.max(Math.max(one,two),zero);
            res = Math.min(res,max-min+1);
            
        }
        
        return res==100001? -1:res;
    }
};
