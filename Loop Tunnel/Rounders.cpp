int solution(int n) {
int ten= 1;
while(n>10){
    int digi = n%10;
    n/=10;
    if(digi>=5) ++n;
    ten*=10;
}
return n*ten;
}
