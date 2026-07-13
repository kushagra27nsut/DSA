class Solution {
public:
    string intToRoman(int num) {
        char one[] = {'I','X','C','M'} ;
        char five[] = {'V','L','D'} ;
        int m = 0 ;
        string s = "" ;
        while (num){
            int n = num%10 ;
            if( n == 9 ){
                s = string(1,one[m])+ string(1,one[m+1]) + s ;
            }
            else if ( n == 4){
                s = string(1,one[m]) + string(1,five[m]) + s ;
            }
            else if (n >= 5){
                s = string(1,five[m]) + string(n-5,one[m]) + s ;
            }
            else if (n > 0){
                s = string(n,one[m]) + s ;
            }
            m++ ;
            num /= 10 ;
        }
        return s ;
    }
};