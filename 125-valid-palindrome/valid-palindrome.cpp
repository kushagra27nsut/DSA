class Solution {
public:
    bool isPalindrome(string sn) {
        string s ;
        for(char c : sn){
            if( c >= 65 && c <= 90 ){
                s += string(1,c + 32) ;
            }
            else if ( c >= 97 && c <= 122){
                s += string(1,c) ;
            }
            else if ( c>= 48 && c <= 57){
                s += string(1,c) ;
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