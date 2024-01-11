/*Given a non-negative integer S represented as a string, remove K digits from the number so that the new number is the smallest possible.
Note : The given num does not contain any leading zero.*/




class Solution {
    public String removeKdigits(String S, int K) {
        // code here
        Stack<Character> stack = new Stack<>();
        
        for(int i=0; i<S.length(); i++){
            char c = S.charAt(i);
            
            while(!stack.isEmpty() && stack.peek() > c && K > 0){
                stack.pop();
                K--;
            }
            
            if(!stack.isEmpty() || c!= '0')
            stack.push(c);
        }
        
        while(!stack.isEmpty() && K > 0){
            stack.pop();
            K--;
        }
        
        if(stack.isEmpty()){
            return "0";
        }
        
        StringBuilder sb = new StringBuilder();
        
        for(Character ch : stack){
            sb.append(ch);
        }
        
        return sb.toString();
    }
}
