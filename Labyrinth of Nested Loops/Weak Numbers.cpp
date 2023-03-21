int numberOfDivisor(int n){
    int cnt = 0;
    if(n==1) return 1;
    if(n == 2 || n==3) return 2;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i*i==n){
                ++cnt;
            }
            else{
                cnt+=2;
            }
        }
    }
    return cnt;
}
vector<int> solution(int n) {
vector<int> divisor;
for(int i=1;i<=n;i++){
    //cout<<i<<" "<<numberOfDivisor(i)<<"\n";
    divisor.push_back(numberOfDivisor(i));
}
vector<int>weakness;
int mx = 0;
for(int i=0;i<divisor.size();i++){
    int cnt = 0;
    for(int j=0;j<i;j++){
        if(divisor[i]<divisor[j]) ++cnt;
    }
    weakness.push_back(cnt);
    if(cnt>mx) mx = cnt;
}
int res = 0;
for(int i=0;i<weakness.size();i++){
    if(weakness[i]==mx) ++res;
}
vector<int>ans(2);
ans[0]=mx;
ans[1]=res;
return ans;
}
