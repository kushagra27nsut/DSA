class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int l = 0 , r = 0;
        for(int i = 0 ; i < n ; i++){
            r+= nums[i] ;
        }
        for(int j = 0 ; j < n ; j ++){
            r-= nums[j] ;
            if (l==r){
                return j ;
            }
            l+= nums[j] ;
        }
        return - 1 ;
    }
};