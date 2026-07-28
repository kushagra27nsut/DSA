class Solution {
public:
    bool help(int target, vector<int>& nums, int len) {
        int sum = 0;

        for (int i = 0; i < len; i++)
            sum += nums[i];

        if (sum >= target)
            return true;

        for (int i = len; i < nums.size(); i++) {
            sum += nums[i];
            sum -= nums[i - len];

            if (sum >= target)
                return true;
        }

        return false;
    }
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size() ;
        int low = 1 , high = n ;
        while(low <= high){
            int mid = low + (high - low)/2 ;
            if (help(target , nums, mid)){
                high = mid - 1 ;
            }
            else{
                low = mid + 1 ;
            }
        }
        if (low == n+1 ) return 0 ;
        return low ;
    }
};