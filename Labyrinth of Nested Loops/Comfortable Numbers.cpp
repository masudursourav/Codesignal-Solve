int digsum(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n/=10;
    }
    return sum;
}
bool isComfortable(int a,int b){
    return (a - digsum(a) <= b) && (a + digsum(a)>=b);
}
int solution(int l, int r) {
int cnt = 0;
for(int i=l;i<=r;i++){
    for(int j=i+1;j<=r;j++){
        if(isComfortable(i,j) && isComfortable(j,i)) ++cnt;
    }
}
return cnt;
}
