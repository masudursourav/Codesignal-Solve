int solution(int n) {
int ans = 0;
while(n>0){
    ans*=10;
    ans+=9;
    --n;
}
return ans;
}
