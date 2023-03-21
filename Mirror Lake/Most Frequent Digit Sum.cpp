int sx(int n){
    int sum = 0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int solution(int n) {
int a[1000001] = {0};
memset(a,0,sizeof(a));
while(n>0){
    int i = sx(n);
    n-=i;
    ++a[i];
}
int mx = 0,ans;
for(int i=0;i<1000001;i++){
    if(a[i]>=mx){
        mx=a[i];
        ans = i;
    }
}
return ans;
}
