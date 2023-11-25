//Given an array arr of n elements in the following format {a1, a2, a3, a4, ... , an/2, b1, b2, b3, b4, ... , bn/2}, the task is shuffle the array to {a1, b1, a2, b2, a3, b3, ... , an/2, bn/2} without using extra space.
Note that n is even.//


class Solution{

	public:
	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	    int x = 10000;
	    for(int i=0;i<n/2;i++){
	        arr[i] = arr[i]+arr[n/2+i]*x;
	    }
	    int j = n-1;
	    
	    for(int i=n/2-1;i>=0;i--){
	        arr[j] = arr[i]/x;
	        arr[j-1] = arr[i]%x;
	        j=j-2;
	    }
	}
};
