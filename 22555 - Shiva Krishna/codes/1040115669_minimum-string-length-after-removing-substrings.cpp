class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        int size = s.length();
        char ch;
        for(int i=0; i<size; ++i){
            ch = s[i];
            if( !st.empty() && 
                ((st.top()=='A' && ch=='B') || (st.top()=='C' && ch=='D')) )               
            {
                st.pop();
            }
            else
                st.push(ch);
        }

        return st.size();
    }
};