class Solution {
public:
    static bool comparator(pair<int,char> a, pair<int,char> b){
        return a.first > b.first;
    }
    string frequencySort(string s) {
        pair<int,char> ch[128] ;
        int n = s.size() ;
        for(int i = 0 ; i < 128 ; i++ ){
            ch[i] = {0,char(i)} ;
        }
        for(int i = 0 ; i < n ; i++ ){
            ch[s[i]].first++ ;
        }
        string ans = "" ;
        sort(ch , ch+128 , comparator)  ;
        for(int i = 0 ; i < 128 ; i++ ){
            while(ch[i].first != 0){
                ans+= ch[i].second ;
                ch[i].first-- ;
            }
        }
        return ans ;
    }
};