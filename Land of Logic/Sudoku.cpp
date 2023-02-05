bool check(vector<int> a){
    for(int i=1;i<=9;i++){
        if(find(a.begin(),a.end(),i) == a.end()){
            return false;
        }
    }
    return true;
}

bool solution(vector<vector<int>> grid) {
   for(auto v:grid){
       if(!check(v)) return false;
   }
   for(int i=0;i<grid.size();i++){
       vector<int>temp;
       for(int j=0;j<grid.size();j++){
           temp.push_back(grid[j][i]);
       }
       if(!check(temp)) return false;
   }
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           vector<int>temp;
           for(int k=i*3;k<(i+1)*3;k++){
               for(int l=j*3;l<(j+1)*3;l++){
                   temp.push_back(grid[k][l]);
               }
           }
           if(!check(temp)) return false;
       }
   }
   return true;
}
