int solution(vector<int> statues) {
int a[21]={0};
int ans = 0;
int mx =-1,mi =30;
for(int i=0;i<statues.size();i++){
    ++a[statues[i]];
    if(statues[i]>mx) mx = statues[i];
    if(statues[i]<mi) mi=statues[i];
}
for(int i=mi;i<=mx;i++){
    if(a[i]<=0) ++ans;
}
return ans;
}
