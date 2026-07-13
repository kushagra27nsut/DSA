class Solution {
public:
    bool isPalindrome(string sn) {
        string s ;
        for(char c : sn){
            if(isalnum(c)){
                s += tolower(c) ;
            }
        }
        int l = 0 , r = s.size() - 1 ;
        while( l <= r){
            if(s[l] != s[r]) return false ;
            l++ ;
            r-- ;
        }
        return true ;
    }
};