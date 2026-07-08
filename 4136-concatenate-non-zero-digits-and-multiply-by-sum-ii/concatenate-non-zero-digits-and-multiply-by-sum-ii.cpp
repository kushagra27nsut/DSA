class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        long long n = s.size() ;
        const int MOD = 1e9 + 7;
        vector<int> ans ;
        vector<int> prefix(n+1,0) ;
        vector<int> id(n,-1) ;
        vector<int> nextNonZero(n,-1) ;
        vector<int> prevNonZero(n,-1) ;
        string compressedstr ;
        int cnt = -1;
        for (int i = 0 ; i <n ; i++){
            prefix[i+1] = prefix[i] ;
            if(s[i] != '0'){
                prefix[i+1] += s[i] - '0' ;
                cnt++ ;
                id[i] = cnt ;
                compressedstr.push_back(s[i]) ;
            }
        }
        int last = - 1 ;
        for (int i = 0; i < n; i++){
            if (s[i] != '0'){
                last = i;
            }
            prevNonZero[i] = last;
        }
        int fast = -1 ;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != '0'){
                fast = i;
            }   
            nextNonZero[i] = fast;
        }
        int m = compressedstr.size();
        vector<long long> prefnum(m + 1, 0);
        vector<long long> pow10(m + 1, 1);
        prefnum[0] = 0 ;
        pow10[0] = 1 ;
        for(int i = 0 ; i <m ; i++){
            int d = compressedstr[i] - '0' ;
            prefnum[i+1] = (prefnum[i]*10 + d)%MOD ;
            pow10[i+1] = (pow10[i]*10)%MOD ;
        }
        for(auto num: queries){
            int l = num[0] ;
            int r = num[1] ;
            int left = nextNonZero[l];
            int right = prevNonZero[r];
            if(left == -1 || right == -1 || left > right){
                ans.push_back(0);
                continue;
            }
            int L = id[left];
            int R = id[right];
            long long sum = prefix[right+1] - prefix[left] ;
            long long number = (prefnum[R+1] - (prefnum[L]*pow10[R-L+1]%MOD) + MOD)%MOD ;
            ans.push_back((sum%MOD)*number%MOD) ;
        }
        return ans ;
    }
};