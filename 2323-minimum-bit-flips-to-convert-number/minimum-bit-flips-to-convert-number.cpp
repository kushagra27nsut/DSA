class Solution {
public:
    int minBitFlips(int start, int goal) {
        int m = start^goal ;
        int count = 0 ;
        for (int i = 0 ; i < 32 ; i++){
            count += (m&1) ;
            m = m>>1 ;
        }
        return count ;
    }
};