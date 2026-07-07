class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans = 0;
        long long  m = 1 , sum = 0 ;
        while(n){
            int q = n%10 ;
            if(q){
                ans += 1LL*q*m ;
                m = 1ll*m*10;
                sum+= q;
            }
            n=n/10;
        }
        return ans*sum ;
    }
};