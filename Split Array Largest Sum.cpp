/*Given an array arr[] of N elements and a number K., split the given array into K subarrays such that the maximum subarray sum achievable out of K subarrays formed is minimum possible. Find that
possible subarray sum.*/


class Solution {
  public:
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int low = 0;
        int high = 0;
        
        for(int i=0; i<N; i++)
            high += arr[i], low = max(low, arr[i]-1);
            
            while(low < high-1){
                int mid = low + (high-low) / 2;
                
                auto check = [&]() -> bool {
                    int cuts = 0;
                    
                    int sum = 0;
                    
                    for(int i=0; i<N; i++){
                        if(sum + arr[i] > mid){
                            ++cuts;
                            sum = arr[i];
                        }
                        else{
                            sum += arr[i];
                        }
                    }
                    return cuts < K;
                };
                if(check())
                    high = mid;
                else
                    low = mid;
            }
            return high;
        
    }
};
