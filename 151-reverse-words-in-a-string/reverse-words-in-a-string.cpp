class Solution {
public:
    string reverseWords(string s) {
        int n = s.size() ;
        string st = "" ;
        int i = n - 1 ;
        while (i >= 0){
            while(i>= 0 && s[i] == ' '){
                i-- ;
            }
            if( i<0) break ;
            int end = i ;
            while( i >= 0 && s[i] != ' '){
                i-- ;
            }
            string sub = s.substr(i+1 , end-i) ;
            if(!st.empty()) {
                st += ' ' ;
            }
            st += sub ;
        }
        return st ;
    }
};