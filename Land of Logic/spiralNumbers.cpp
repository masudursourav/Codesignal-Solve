









vector<vector<int>> solution(int n) {
int di = 0;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int x=0,y=0;
int cur_num = 2;
vector<vector<int>>ans(n,vector<int>(n,0));
ans[0][0]=1;
while(cur_num<= (n*n)){
    int new_x = x + dx[di];
    int new_y = y + dy[di];
    if((new_x < 0 || new_y < 0 || new_x==n || new_y==n) || ans[new_x][new_y]!=0){
        ++di;
        if(di==4){
            di = 0;
        }
        new_x = x + dx[di];
        new_y = y + dy[di];
    }
    ans[new_x][new_y] = cur_num;
    x=new_x;
    y=new_y;
    ++cur_num;
}
return ans;
}









