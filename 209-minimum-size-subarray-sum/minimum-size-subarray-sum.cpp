class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0 , j = 0 , n = nums.size() ;
        int sum = 0 , m = INT_MAX ;
        while( j < n ){
            sum += nums[j] ;
            while( sum >= target){
                sum -= nums[i] ;
                m = min(m,j-i+1) ;
                i++ ;
            }
            j++ ;
        }
        if(m == INT_MAX){
            return 0 ;
        }
        return m ;
    }
};