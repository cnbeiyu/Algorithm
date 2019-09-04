
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode result=new ListNode(0);
        ListNode p=l1,q=l2,curr=result;
        int tmp=0;
        while (p != null || q != null) {
            int x = (p != null) ? p.val : 0;
            int y = (q != null) ? q.val : 0;
            int sum = tmp + x + y;
            tmp = sum/10;
            curr.next=new ListNode(sum%10);
            curr=curr.next;
            if (p != null) p = p.next;
            if (q != null) q = q.next;
        }
        if (tmp>0){
            curr.next=new ListNode(tmp);
        }
        return result.next;
    }
}
//leetcode submit region end(Prohibit modification and deletion)
