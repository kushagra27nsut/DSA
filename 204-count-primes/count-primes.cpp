class Solution {
public:
    int countPrimes(int n) {
        int i = 2 ;
        vector<int> nd ;
        while ( i < n){
            bool pr = true ;
            for(const auto& it : nd){
                if (1LL*it*it > i) 
                    break;
                if ((i%it) == 0 ){
                    pr = false ;
                    break ;
                }
            }
            if (pr) nd.push_back(i) ;
            i+=1;
        }
        return nd.size() ;
    }
};