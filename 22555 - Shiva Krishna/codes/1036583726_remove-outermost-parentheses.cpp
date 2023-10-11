class Solution {
public:
    string removeOuterParentheses(string s) {
        string output = "";
        stack<char> st;

        for(char ch:s){
            if(ch == '('){
                if(st.size() > 0)
                    output += ch;
                st.push(ch);
            }
            else{
                if(st.size() > 1)
                    output += ch;
                st.pop();
            }
        }
        return output;    
    }
};