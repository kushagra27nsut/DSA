class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size() ;
        int r = -1 ;
        for(int i = n - 1 ; i >= 0 ; i-- ){
            if((num[i] - '0')%2 == 1 ){
                r = i ;
                break ;
            }
        }
        int i = 0 ;
        while(num[i] == '0' && i <=r) i++ ;
        return num.substr(i, r-i+1) ;
    }
};