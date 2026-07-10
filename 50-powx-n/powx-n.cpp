class Solution {
public:
    double power(double x , long long n ){
        if(n == 0) return 1.0 ;
        if(n == 1) return x ;
        double half = power(x,n/2) ;
        if(n%2 == 0){
            return half*half ;
        }
        return x*half*half ;
    }
    double myPow(double x, int n) {
        long long N = n ;
        if(x==1) return 1.0 ;
        if(n<0){
            return (1.0/power(x,-1*1LL*N)) ;
        }
        return power(x,n) ;
    }
};