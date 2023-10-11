class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        int i,j;
        char ch;
        bool flag;
        
        for(i=0; i<strs[0].length(); i++){
            ch = strs[0][i];
            flag = true;
            
            for(j=1; j<strs.size(); j++)
                if(strs[j][i] != ch){
                    flag = false;
                    break;
                }
               
            
            if (flag == false) 
                break;
            prefix.push_back(ch);
            } 
        return prefix;
   }
};