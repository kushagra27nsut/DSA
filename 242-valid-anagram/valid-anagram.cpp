class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false ;
        vector<int> mp1(26,0);
        for(int i = 0 ; i < s.size() ; i++ ){
            mp1[s[i] - 'a']++ ;
            mp1[t[i] - 'a']-- ;
        }
        for(int i : mp1){
            if( i != 0){
                return false ;
            }
        }
        return true ;
    }
};