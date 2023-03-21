int solution(vector<vector<int>> matrix) {
  set<string>ans;
  for(int i=0;i<matrix.size()-1;i++){
      for(int j=0;j<matrix[0].size()-1;j++){
          string temp;
          temp += (matrix[i][j] + '0');
          temp += (matrix [i][j+1] +'0');
          temp += (matrix [i+1][j+1] +'0');
          temp += (matrix[i+1][j] +'0');
          ans.insert(temp);
      }
  }
  return ans.size();
}
