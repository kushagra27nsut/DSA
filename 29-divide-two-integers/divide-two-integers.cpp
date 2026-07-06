class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(divisor == 1) return dividend;
        long long n= dividend ;
        long long d = divisor ;
        bool ispositive = true ;
        if (n>=0 && d<0) ispositive = false ;
        if (n<0 && d>0) ispositive = false ;
        n= abs(n) , d = abs(d) ;
        int ans = 0;
        while ( n >= d ){
            int count = 0 ;
            while (n >= (d<<(count + 1))){
                count++ ;
            }
            ans += 1<<count ;
            n -= (d<<count) ;
        }
        if (ans > INT_MAX && ispositive == false) return INT_MIN ;
        if (ans > INT_MAX && ispositive == true ) return INT_MAX ;
        return ispositive ? ans : -1*ans ;
    }
};