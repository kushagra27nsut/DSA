class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size() , n = mat[0].size() ;
        for(int i = 0 ; i < m - 1; i++ ){
            if (mat[i][0] > mat[i][1] && mat[i][0] > mat[i+1][0] ) return {i,0} ;
            if (mat[i][n -1] > mat[i][n - 2] && mat[i][n-1] > mat[i+1][n-1]) return {i,n-1} ;
            int low = 1 , high = n - 2 ;
            while(low <= high){
                int mid = low + (high - low)/2 ;
                if( mat[i][mid] > mat[i][mid-1] && mat[i][mid] > mat[i][mid+1] && mat[i][mid] > mat[i+1][mid]){
                    return {i,mid};
                }
                if (mat[i][mid] > mat[i][mid+1]){
                    high = mid - 1 ;
                }
                else{
                    low = mid + 1;
                }
            }
        }
        int i = m -1 ;
        if(mat[i][0] > mat[i][1]) return {i,0} ;
        if(mat[i][n-1] > mat[i][n - 2]) return {i,n-1} ;
        int low = 1 , high = n - 2 ;
        while(low <= high){
            int mid = low + (high - low )/2 ;
            if(mat[i][mid] > mat[i][mid+1] && mat[i][mid] > mat[i][mid-1]) return {i,mid} ;
            if (mat[i][mid] > mat[i][mid+1]){
                high = mid - 1 ;
            }
            else{
                low = mid + 1 ;
            }
        }
        return {-1,-1} ;
    }
};