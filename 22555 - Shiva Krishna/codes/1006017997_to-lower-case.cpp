class Solution {
public:
    string toLowerCase(string s) {
        int i=0,n=s.length();
        for(; i<n; ++i)
            if(s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        return s;   
    }
};