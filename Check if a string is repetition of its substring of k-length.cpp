/*Given a string s, check if it is possible to convert it into a string that is the repetition of a substring of length k. Conversion has to be done by following the steps mentioned below only once:

Select two indices i and j (zero-based indexing, i could be equal to j), such that i and j are divisible by k.
Select substrings of length k starting from indices i and j.
Replace substring starting at index i with substring starting at index j within the string.*/


class Solution{
public:
	
	int kSubstrConcat (int n, string s, int k)
	{
	    if(n%k)
         return 0;
        
        map<string,int>mpp;
        string temp="";
        temp+=s[0];
        
        for(int i=1;i<n;i++){
            if(i%k==0){
                mpp[temp]++;
                temp="";
            }
            temp+=s[i];
        }
        mpp[temp]++;
        
        if(mpp.size()>2)
         return 0;
        
        // for cases like k=2 & s=bbccbbcc.
        int count=0;
        for(auto it:mpp){
            if(it.second>1)
             count++;
        }
        
        if(count>1)
         return 0;
         
        
        return 1;
	}
};
