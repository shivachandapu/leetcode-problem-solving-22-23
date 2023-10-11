class Solution {
public:
    string removeStars(string s) {
        string output;
        stack<char> st;

        bool star = false;
        for(char ch:s){
             if(!st.empty() && (ch=='*')){
                star = true;
                st.pop();
            }
            else if(ch!='*')
                st.push(ch);
        }

        if(!star)
            return s;
        while(!st.empty()){
            output = st.top() + output;
            st.pop();
        }
        return output;
    }
};