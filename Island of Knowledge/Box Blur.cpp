vector<vector<int>> solution(vector<vector<int>> image) {
vector<vector<int>>ans(image.size()-2);
for(int i=0;i<image.size()-2;i++){
    for(int j=0;j<image[i].size()-2;j++){
        int sum=0;
        for(int k=i;k<i+3;k++){
            for(int l=j;l<j+3;l++){
                sum+=image[k][l];
            }
        }
        sum/=9;
        ans[i].push_back(sum);
    }
}
return ans;
}
