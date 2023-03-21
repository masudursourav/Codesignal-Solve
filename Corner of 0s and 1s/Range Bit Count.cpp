int solution(int a, int b) {
int ans = 0;
for(int i=a;i<=b;i++){
    int temp = i;
    while(temp){
        ans+=temp%2;
        temp/=2;
    }
    
}
return ans;
}
