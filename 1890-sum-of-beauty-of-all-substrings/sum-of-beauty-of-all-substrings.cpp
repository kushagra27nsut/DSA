class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int sum = 0;
        for(int i = 0 ; i < n ; i++ ){
            vector<int> freq(26,0) ;
            for(int j = i ; j < n ; j++ ){
                freq[s[j] - 'a']++ ;
                int m = INT_MIN ;
                int mn = INT_MAX ;
                for(int it : freq ){
                    if(it == 0 ) continue ;
                    m = max(m,it) ;
                    mn = min(mn,it) ;
                }
                sum += (m-mn) ;
            }
        }
        return sum ;
    }
};