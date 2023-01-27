vector<vector<int>> solution(vector<vector<bool>> matrix) {
vector<vector<int>>ans(matrix.size());
for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[i].size();j++){
        int mines = 0;
        if(i > 0){
          if(matrix[i-1][j]) ++mines;
          if(matrix[i-1][j-1] && j>0) ++mines;
          if(matrix[i-1][j+1] && j+1<matrix[i].size()) ++mines;
        }
        if(i<matrix.size()-1){
         if(matrix[i+1][j]) ++mines;
         if(matrix[i+1][j-1] && j>0) ++mines;
         if(matrix[i+1][j+1] && j+1<matrix[i].size()) ++mines;
        }
        if(matrix[i][j-1] && j>0) ++mines;
        if(matrix[i][j+1] && j+1<matrix[i].size()) ++mines;
        
        ans[i].push_back(mines);
    }
}
return ans;
}
