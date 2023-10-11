class Solution {
public:
    bool backspaceCompare(string s, string t) {
        if(s.length()==0 && t.length()==0)
            return true;
        stack<char> s1;
        for(char ch1:s){
            if(!s1.empty() && (ch1=='#')){
                s1.pop();
            }
            else if(ch1!='#')
                s1.push(ch1);
        }

        stack<char> s2;
        for(char ch2:t){
            if(!s2.empty() && (ch2=='#')){
                s2.pop();
            }
            else if(ch2!='#')
                s2.push(ch2);
        }

        if(s1.size() != s2.size())
            return false;
        else{
            while(!s1.empty()){
                // cout<<s1.top()<<" | "<<s2.top()<<endl;
                if(s1.top() != s2.top())
                    return false;
                else{
                    s1.pop();
                    s2.pop();
                }
            }
        }
        return true;
    }
};