class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string> st;
        int first, sum;
        for(string ch:operations){
            if(ch=="+"){
                first = stoi(st.top());
                st.pop();
                sum = first + stoi(st.top());
                st.push(to_string(first));
                st.push(to_string(sum));
            }
            else if(ch=="C")
                st.pop();
            else if(ch=="D")
                st.push(to_string(2*stoi(st.top())));
            else
                st.push(ch);

        }
        sum = 0;
        while(!st.empty()){
            sum+= stoi(st.top());
            st.pop();
        }
        return sum;
    }
};