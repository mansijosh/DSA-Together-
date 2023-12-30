/*Given two arrays of integers A[] and B[] of size N and M, the task is to check if a pair of values (one value from each array) exists such that swapping the elements of the pair will make the sum 
of two arrays equal.*/


class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        unordered_map<int,int> mp;
        int a=0,b=0;
        
        for(int i=0;i<n;i++){
            a+= A[i];
        }
        for(int i=0;i<m;i++){
            b+=B[i];
            mp[B[i]]=1;
        }
        for(int i=0;i<n;i++){
            int bi = (b-a)/2 + A[i];
            if((b-a+2*A[i])%2==0&&mp.find(bi)!=mp.end()) return 1;
        }
        return -1;
	}
 

};

 
