class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode result=new ListNode(0);
        ListNode p=l1,q=l2,curr=result;
        while(p!=null&&q!=null){
            if(p.val<q.val){
                curr.next=new ListNode(p.val);
                if (p != null) p = p.next;
            }else{
                curr.next=new ListNode(q.val);
                if (q != null) q = q.next;
            }
            curr=curr.next;
        }
        curr.next=q==null?p:q;
        return result.next;
    }
}
//leetcode submit region end(Prohibit modification and deletion)
