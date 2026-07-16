class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxel = *max_element(piles.begin(), piles.end());
        int low = 1 , high = maxel ;
        while(low <= high){
            int mid = (low + high)/2 ;
            int hours = 0 ;
            for(int num : piles){
                hours += ( num + mid - 1)/ mid ;
                if(hours > h) break;
            }
            if( hours > h ){
                low = mid + 1 ;
            }
            else{
                high = mid - 1 ;
            }
        }
        return low ;
    }
};