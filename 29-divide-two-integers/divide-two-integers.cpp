class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(divisor == 1) return dividend;
        long long a = dividend ;
        long long b = divisor ;
        bool ispositive = true ;
        if (a>=0 && b<0) ispositive = false ;
        if (a<0 && b>0) ispositive = false ;
        a = abs(a) , b = abs(b) ;
        long long sum = 0 , ans = 0 ;
        while ( sum + b <= a ){
            ans++ ;
            sum += b ;
        }
        if (ans > INT_MAX && ispositive == false) return INT_MIN ;
        if (ans > INT_MAX && ispositive == true ) return INT_MAX ;
        return ispositive ? ans : -1*ans ;
    }
};