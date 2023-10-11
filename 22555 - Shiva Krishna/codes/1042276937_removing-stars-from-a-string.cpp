class Solution {
public:
    string removeStars(string s) {        
        stack<char> st;
        int size = s.size();

        for(int i=0; i<size; ++i){
            if(s[i]=='*')
                st.pop();
            else
                st.push(s[i]);
        }

        string output="";
        while(!st.empty()){
            output.push_back(st.top());
            st.pop();
        }

        reverse(output.begin(),output.end());
        return output;
    }
};