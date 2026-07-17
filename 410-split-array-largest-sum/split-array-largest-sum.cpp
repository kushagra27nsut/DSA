class Solution {
public:
    bool possible(vector<int>& nums , int k , int mid){
        int sum = 0 , tmp = 1 ;
        for (int i = 0 ; i < nums.size() ; i++){
            if (sum + nums[i] <= mid){
                sum += nums[i] ;
            }
            else{
                tmp++ ;
                sum = nums[i] ;
            }
        }
        if (tmp <= k ) return true ;
        return false ;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end()) , high = 0 ;
        for(int i : nums){
            high += i ;
        }
        while (low <= high ){
            int mid = low + (high - low)/2 ;
            if(possible(nums , k , mid)){
                high = mid - 1 ;
            }
            else{
                low = mid + 1 ;
            }
        }
        return low ;
    }
};