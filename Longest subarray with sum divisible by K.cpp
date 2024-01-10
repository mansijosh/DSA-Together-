/*Given an array arr containing N integers and a positive integer K, find the length of the longest sub array with sum of the elements divisible by the given value K.*/


class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int K)
	{
	    // Complete the function
	    int sum = 0;
	    unordered_map<int,int> suffix;
	    suffix[0] = n;
	    
	    int ans = 0;
	    
	    for(int i=n-1; i>-1; i--){
	        sum = (sum + (arr[i] % K) + K) % K;
	        
	        if(!suffix.count(sum))
	            suffix[sum] = i;
	           else
	            ans = max(ans, suffix[sum] - i);
	    }
	    
	    return ans;
	}
};
