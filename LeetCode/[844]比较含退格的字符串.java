//给定 S 和 T 两个字符串，当它们分别被输入到空白的文本编辑器后，判断二者是否相等，并返回结果。 # 代表退格字符。
//
// 
//
// 示例 1： 
//
// 输入：S = "ab#c", T = "ad#c"
//输出：true
//解释：S 和 T 都会变成 “ac”。
// 
//
// 示例 2： 
//
// 输入：S = "ab##", T = "c#d#"
//输出：true
//解释：S 和 T 都会变成 “”。
// 
//
// 示例 3： 
//
// 输入：S = "a##c", T = "#a#c"
//输出：true
//解释：S 和 T 都会变成 “c”。
// 
//
// 示例 4： 
//
// 输入：S = "a#c", T = "b"
//输出：false
//解释：S 会变成 “c”，但 T 仍然是 “b”。 
//
// 
//
// 提示： 
//
// 
// 1 <= S.length <= 200 
// 1 <= T.length <= 200 
// S 和 T 只含有小写字母以及字符 '#'。 
// 
//
// 
// Related Topics 栈 双指针
//毫无难度一遍过

import java.util.Stack;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    public boolean backspaceCompare(String S, String T) {
        Stack<Character> stack1=new Stack<Character>();
        Stack<Character> stack2=new Stack<Character>();
        for (int i=0;i<S.length();i++){
            if (S.charAt(i)=='#'){
                if (stack1.isEmpty()){

                }else {
                    stack1.pop();
                }
            }else {
                stack1.push(S.charAt(i));
            }
        }
        for (int j=0;j<T.length();j++){
            if (T.charAt(j)=='#'){
                if (stack2.isEmpty()){

                }else {
                    stack2.pop();
                }
            }else {
                stack2.push(T.charAt(j));
            }
        }
        while (!stack1.isEmpty()){
            if (stack2.isEmpty()){
                return false;
            }
            if (stack1.peek()==stack2.peek()){
                stack1.pop();
                stack2.pop();
            }else {
                return false;
            }
        }
        return true;
    }
}
//leetcode submit region end(Prohibit modification and deletion)
