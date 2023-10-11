class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> tokens;
        stringstream ss(s);
        string str;

        while(ss >> str){
            tokens.push_back(str);
        }

        return tokens[tokens.size()-1].size();
    }
};