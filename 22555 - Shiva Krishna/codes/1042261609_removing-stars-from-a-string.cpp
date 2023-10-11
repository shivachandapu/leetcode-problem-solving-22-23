class Solution {
public:
    string removeStars(string s) {
        string output = "";
        stack<char> st;
        int size = s.size();
        char ch;
        
        bool star = false;
        for(int i=0; i<size; ++i){
            ch = s[i];
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