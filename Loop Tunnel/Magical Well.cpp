int solution(int a, int b, int n) {
int ans=0;
while(n--){
    ans+= a*b;
    ++a;
    ++b;
}
return ans;
}
