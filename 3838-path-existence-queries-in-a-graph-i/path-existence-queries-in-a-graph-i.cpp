class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxdiff, vector<vector<int>>& queries) {
        vector<int> dif(n,0) ;
        for(int i = 0 ; i < n -1 ; i++){
            dif[i+1] = dif[i] + (nums[i+1] - nums[i] > maxdiff);
        }
        vector<bool> ans ;
        for(auto& qr : queries) {
            int l = qr[0] , r = qr[1] ;
            ans.push_back(dif[r] - dif[l] == 0) ;
        }
        return ans ;
    }
};