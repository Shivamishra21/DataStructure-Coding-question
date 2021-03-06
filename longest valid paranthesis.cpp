class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.length() <=1) return 0;
        stack<int>st;
        st.push(-1);
        int maxx = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(') st.push(i);
            else{
                st.pop();
                if(st.empty()) st.push(i);
                else{
                    maxx = max(maxx,i-st.top());
                }
            }
        }
        return maxx;
    }
};
