class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size() ;
        vector<vector<int>> ans ;
        int subsets = 1<<n ;
        for(int sub = 0 ; sub < subsets ; sub++ ){
            vector<int> tmp ;
            for(int i = 0 ; i < n ; i++ ){
                if ( sub & 1<<i){
                    tmp.push_back(nums[i]) ;
                }
            }
            ans.push_back(tmp) ;
        }
        return ans ;
    }
};