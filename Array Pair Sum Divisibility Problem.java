/*Given an array of integers nums and a number k, write a function that returns true if given array can be divided into pairs such that sum of every pair is divisible by k.*/


class Solution {
    public boolean canPair(int[] nums, int k) {
        // Code here
        if(nums.length%2==1) return false;
        int arr[] = new int[k];
        
        for(int i=0; i<nums.length; i++){
            arr[nums[i]%k]++;
        }
        
        int i=1,j=k-1;
        if(arr[0]%2==1) return false;
        
        while(i<=j){
            if(arr[i] != arr[j]) return false;
            i++;
            j--;
        }
        
        return true;
    }
}
