class Solution {
public:
    int numberOfSteps(int num) {
        int count;
        for(count=0; num!=0; ++count){
            if (num%2 == 0)
                num = num/2;
            else
                --num;
        }
        return count;
    }
};