class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int,char> mp = {
            {1000,'M'} , {500,'D'} , {100,'C'} , {50,'L'} ,{10,'X'} , {5,'V'} , {1,'I'} 
        } ;
        int m = 1 ;
        string s = "" ;
        while (num){
            int n = num%10 ;
            if( n == 9 ){
                s = string(1,mp[m])+ string(1,mp[m*10]) + s ;
            }
            else if ( n == 4){
                s = string(1,mp[m]) + string(1,mp[5*m]) + s ;
            }
            else if ( n < 9 && n > 5){
                s = string(1,mp[m*5]) + string(n-5,mp[m]) + s ;
            }
            else if ( n < 5 && n > 0){
                s = string(n,mp[m]) + s ;
            }
            else if (n == 5 || n == 1){
                s = string(1,mp[n*m]) + s ;
            }
            m = m*10 ;
            num /= 10 ;
        }
        return s ;
    }
};