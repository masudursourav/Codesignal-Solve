int solution(vector<vector<int>> matrix) {
     int ans = 0;
     for(int i=0;i<matrix.size();i++){
         for(int j=0;j<matrix[i].size();j++){
             if(i==0){ 
                 ans+=matrix[i][j];
                 if(matrix[i][j]==0 && i+1<matrix.size()){
                     matrix[i+1][j] = 0;
                 }
             }
             else if(matrix[i-1][j]!=0) ans+=matrix[i][j];
             else if(i+1 <matrix.size() && matrix[i][j]==0) matrix[i+1][j] = 0;
     }
     }
     return ans;
}
