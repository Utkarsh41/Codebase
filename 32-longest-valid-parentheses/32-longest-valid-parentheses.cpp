class Solution {
public:
    int longestValidParentheses(string s) {
        
        int res=0;
        stack<int>st;
        st.push(-1);
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()==true){
                    st.push(i);
                }
                else{
                    res=max(res,i-st.top());
                }
            }
        }
        return res;
    }
};