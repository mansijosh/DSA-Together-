/*Given an array of integers arr[] of length N, every element appears thrice except for one which occurs once.
Find that element which occurs once.*/




class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        map<int,int> mpp;
        for(int i=0; i<N; i++) {
            mpp[arr[i]] ++;
        }
        
        for(auto &it:mpp){
            if(it.second != 3) return it.first;
        }
        return -1;
    }
};
