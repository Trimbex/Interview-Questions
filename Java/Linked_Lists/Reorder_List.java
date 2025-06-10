/*
You are given the head of a singly linked-list. The list can be represented as:

L0 → L1 → … → Ln - 1 → Ln
Reorder the list to be on the following form:

L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
You may not modify the values in the list's nodes. Only nodes themselves may be changed.

 

Example 1:


Input: head = [1,2,3,4]
Output: [1,4,2,3]
Example 2:


Input: head = [1,2,3,4,5]
Output: [1,5,2,4,3]
 

Constraints:

The number of nodes in the list is in the range [1, 5 * 104].
1 <= Node.val <= 1000

*/





/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public void reorderList(ListNode head) {

        if (head == null) return;
        ArrayList<ListNode> tree = new ArrayList<>();
        ListNode current = head;

        while(current != null)
        {
            tree.add(current);
            current = current.next;
        }

        int left = 0, right = tree.size() - 1;
        
        while(left < right)
        {
            tree.get(left).next = tree.get(right);
            left++;

            if(left == right) break;

            tree.get(right).next = tree.get(left);
            right--;

        }

        tree.get(right).next = null;




        



        

        
    }
}
