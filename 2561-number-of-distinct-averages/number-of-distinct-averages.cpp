class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        int n = nums.size() ;
        int i = 0 , j = n - 1 ;
        unordered_set<int> avg ;
        while (i < j) {
            int c = (nums[i] + nums[j]) ;
            avg.insert(c) ;
            i++;
            j-- ;
        }
        return avg.size() ;
    }
};