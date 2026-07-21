class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums , int target) {
        int n = nums.size() , m = nums[0].size() ;
        int row = 0 , col = m - 1;
        while( row< n && col >= 0 ){
            if(nums[row][col] == target){
                return true ;
            }
            else if (nums[row][col] < target){
                row++ ;
            }
            else{
                col-- ;
            }
        }
        return false ;
    }
};