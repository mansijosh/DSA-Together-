/*Given an array a of length n and a number k, find the largest sum of the subarray containing at least k numbers. It is guaranteed that the size of array is at-least k.*/



class Solution {
    
    public long maxSumWithK(long a[], long n, long k)
    {
        long sum =0,max =0,prv =0;
        int i=0,j=0;
        
        while(i<k){
            sum = sum + a[i++];
        }
        max = sum;
        
        while(i<n){
            sum = sum + a[i++];
            prv = prv + a[j++];
            max = Math.max(max,sum);
            
            if(prv<0){
                sum = sum - prv;
                prv = 0;
                max = Math.max(sum,max);
            }
        }
        return max;
    }
}
