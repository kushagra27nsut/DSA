class Solution {
public:
    int com(string s , int i , long long n , int sign){
        if(i >= s.size() || !isdigit(s[i]) ){
            return int(sign*n) ;
        }
        n = n*10 + (s[i] - '0') ;
        if( sign*n > INT_MAX) return INT_MAX ;
        if(sign*n < INT_MIN ) return INT_MIN ;
        return com(s,i+1,n,sign) ;
    }
    int myAtoi(string s) {
        int i = 0 ;
        while(s[i] == ' ') i++ ;
        int sign = 1 ; 
        if( i < s.size() && ( s[i] == '+' || s[i] == '-')){
            sign = (s[i] == '-') ? -1 : 1 ;
            i++ ;
        }
        return com(s , i , 0 , sign) ;
    }
};