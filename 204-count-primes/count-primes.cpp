class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<bool> prime(n,true) ;
        int count = 1 ;
        prime[0] = prime[1] = false ;
        for(int i= 3 ; i*i <= n ; i+=2){
            if(prime[i]){
                for(int j = i*i ; j < n ; j+=i*2){
                    prime[j] = false ;
                }
            }
        }
        for(int i = 3 ; i < n ; i+=2 ){
            if(prime[i]){
                count++ ;
            }
        }
        return count ;
    }
};