class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int sum = 0;
        for(int i = 0 ; i < n ; i++ ){
            unordered_map<char,int> freq ;
            for(int j = i ; j < n ; j++ ){
                freq[s[j]]++ ;
                int m = INT_MIN ;
                int n = INT_MAX ;
                for(auto it : freq ){
                    m = max(m,it.second) ;
                    n = min(n,it.second) ;
                }
                sum += (m-n) ;
            }
        }
        return sum ;
    }
};