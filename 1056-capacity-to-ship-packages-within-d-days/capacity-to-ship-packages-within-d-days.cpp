class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin() , weights.end()) ;
        int high = 0 ;
        for(int n : weights){
            high += n ;
        }
        while(low <= high ){
            int mid = low + (high - low )/2 ;
            int count = 0 , tmp = 1 ;
            for(int num : weights){
                if (count + num > mid) {
                    tmp++;
                    count = num;
                }
                else {
                    count += num;
                }
                if(tmp > days ) break ;
            }
            if (tmp > days){
                low = mid + 1 ;
            }
            else {
                high = mid - 1 ;
            }
        }
        return low ;
    }
};