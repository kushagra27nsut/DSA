class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0 , high = nums.size() - 1 ;
        int ans = nums[0] ;
        while(low <= high){
            int mid = (low + high)/2 ;
            if(nums[low] < nums[high]){
                ans = min(ans,nums[low]) ;
                high = mid - 1;
            }
            else{
                if( nums[mid] >= nums[low] && nums[mid] > nums[high]){
                    low = mid + 1 ;
                }
                else{
                    ans = min(ans,nums[mid]) ;
                    high = mid - 1 ;
                }
            }
        }
        return ans ;
    }
};