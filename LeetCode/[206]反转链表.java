class Solution {
    public ListNode reverseList(ListNode head) {
        if (head==null){
            return null;
        }
        ListNode last=head;
        ListNode current=last.next;
        while(current!=null){
            last.next=current.next;
            current.next=head;
            head=current;
            current=last.next;
        }
        return head;

    }
}
//leetcode submit region end(Prohibit modification and deletion)
