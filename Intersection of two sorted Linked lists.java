//Given two linked lists sorted in increasing order, create a new linked list representing the intersection of the two linked lists. The new linked list should be made with without changing the original lists.

Note: The elements of the linked list are not necessarily distinct.


  
class Solution
{
   public static Node findIntersection(Node t1, Node t2)
    {
        // code here.
        Node result = null;
        Node curr = null;
        
        HashMap<Integer,Integer> set = new HashMap<>();
        while(t1!= null){
            set.put(t1.data,set.getOrDefault(t1.data,0) + 1);
            t1 = t1.next;
        }
        while(t2!=null){
            
            if(set.containsKey(t2.data) && set.get(t2.data) > 0){
                set.put(t2.data, set.get(t2.data) - 1);
                if(result == null){
                    result = new Node(t2.data);
                    curr = result;
                }
                else{
                    curr.next = new Node(t2.data);
                    curr = curr.next;
                }
            }
            t2 = t2.next;
        }
        return result;
    }
}

  
