class Solution {
public:
    string removeDuplicates(string s) {
        string output = "";
        stack<char> st;
        int size = s.size();

        for(int i=0; i<size; ++i){
            if(st.empty()){
                st.push(s[i]);   
            }
            else{
                if(st.top()==s[i])
                    st.pop();
                else
                    st.push(s[i]);
            }    
        }

        while(!st.empty()){
            output = st.top() + output;
            st.pop();
        }
        return output;
    }
};