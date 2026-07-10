class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false ;
        vector<int> mp1(26,-1);
        vector<int> mp2(26,-1);
        for(int i = 0 ; i < s.size() ; i++ ){
            mp1[s[i] - 'a']++ ;
            mp2[t[i] - 'a']++ ;
        }
        for(int i = 0 ; i < s.size() ; i++ ){
            if(mp1[t[i] - 'a'] != mp2[t[i] - 'a']) return false ;
        }
        return true ;
    }
};