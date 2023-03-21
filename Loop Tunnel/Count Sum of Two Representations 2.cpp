int solution(int n, int l, int r) {
    int cnt = 0;
while(l<=r){
    if(l+r == n){
        ++cnt;
        --r;
        ++l;
    }
    else if(l+r>n){
        --r;
    }
    else{
        ++l;
    }
}
return cnt;
}
