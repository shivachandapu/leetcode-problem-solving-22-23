class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)
            return x;
        
        // double sqrt=1,i=1;
        // while(sqrt <= x){
        //     ++i;
        //     sqrt = i*i;            
        // }
        double i=1,sqrt=1;
        for(; sqrt<=x; ++i)
            sqrt = i*i;

        return i-2;
    }
};