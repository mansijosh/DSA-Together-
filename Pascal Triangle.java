//Given a positive integer N, return the Nth row of pascal's triangle.
Pascal's triangle is a triangular array of the binomial coefficients formed by summing up the elements of previous row.
The elements can be large so return it modulo 109 + 7.



  
class Solution {
    ArrayList<Long> nthRowOfPascalTriangle(int n) {
        // code here
        ArrayList<Long> prev = new ArrayList<>();
        prev.add(1L);
        
        for(int i=1;i<n;i++){
            ArrayList<Long> next = new ArrayList<>();
            next.add(1L);
            
            for(int j=1;j<prev.size();j++){
                next.add((prev.get(j)+prev.get(j-1))%1000000007);
            }
            next.add(1L);
            prev = next;
        }
        return prev;
    }
}
