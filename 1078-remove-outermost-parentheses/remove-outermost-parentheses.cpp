class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int count = 0;
        for(char k :s){
            if(k == '('){
                if(count>0) ans+=k ;
                count++;
            }
            else if( k == ')'){
                count--;
                if(count>0) ans+=k ;
            }
        }
        return ans ;
    }
};