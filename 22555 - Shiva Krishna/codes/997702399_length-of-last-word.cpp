class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int count=0;

        while(s[--n] == ' ');
        while( n>0 && s[--n] != ' '){
            count++;
        }
        return count+1;
    }
};

