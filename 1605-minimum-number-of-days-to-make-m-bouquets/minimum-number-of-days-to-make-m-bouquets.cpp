class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size() ;
        if(1LL* m*k > n ) return -1 ;
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low <= high ){
            int mid = low + (high - low)/ 2 ;
            int count = 0 , tmp = 0 ;
            for( int num : bloomDay ){
                if(mid >= num){
                    count++;
                }
                if ( count >= k ){
                    tmp++ ;
                    count = 0 ;
                }
                else if ( mid < num && count < k){
                    count = 0 ;
                }
            }
            if ( tmp < m ){
               low = mid + 1 ; 
            }
            else{
                high = mid - 1 ;
            }
        }
        return low ;
    }
};