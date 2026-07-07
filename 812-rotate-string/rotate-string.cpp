class Solution {
public:
    bool rotateString(string& s, string goal) {
        if (s == goal) return true;
        int n = s.size() ;
        for(int i = 0 ; i < n ; i ++ ){
            char o = s[0] ;
            s.erase(0,1); 
            s.push_back(o) ;
            if(s == goal) return true ;
        }
        return false ;
    }
};