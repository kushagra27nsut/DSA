class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> map1(256,-1) ;
        vector<int> map2(256,-1) ;
        for(int i = 0 ; i < s.size() ; i++){
            if(map1[s[i]] != map2[t[i]]){
                return false ;
            }
            map1[s[i]] = i ;
            map2[t[i]] = i ;
        }
        return true ;
    }
};