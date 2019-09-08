//设计一个支持 push，pop，top 操作，并能在常数时间内检索到最小元素的栈。 
//
// 
// push(x) -- 将元素 x 推入栈中。 
// pop() -- 删除栈顶的元素。 
// top() -- 获取栈顶元素。 
// getMin() -- 检索栈中的最小元素。 
// 
//
// 示例: 
//
// MinStack minStack = new MinStack();
//minStack.push(-2);
//minStack.push(0);
//minStack.push(-3);
//minStack.getMin();   --> 返回 -3.
//minStack.pop();
//minStack.top();      --> 返回 0.
//minStack.getMin();   --> 返回 -2.
// 
// Related Topics 栈 设计

/*
使用辅助栈
see https://leetcode-cn.com/problems/min-stack/solution/shi-yong-fu-zhu-zhan-tong-bu-he-bu-tong-bu-python-/
*/
import java.util.Stack;

//leetcode submit region begin(Prohibit modification and deletion)
class MinStack {

    /** initialize your data structure here.
     */
    private Stack<Integer> mainStack;
    private Stack<Integer> helpStack;

    public MinStack() {
    mainStack=new Stack<Integer>();
    helpStack=new Stack<Integer>();

    }
    
    public void push(int x) {
        mainStack.push(x);
        if (helpStack.isEmpty()||x<=helpStack.peek()){
            helpStack.push(x);
        }else {
            helpStack.push(helpStack.peek());
        }
    }
    
    public void pop() {
        mainStack.pop();
        helpStack.pop();
    }
    
    public int top() {
        return mainStack.peek();
    }
    
    public int getMin() {
        return helpStack.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
//leetcode submit region end(Prohibit modification and deletion)
