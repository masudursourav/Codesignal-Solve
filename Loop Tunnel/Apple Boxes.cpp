int solution(int k) {
int red  = 0, yellow  = 0;
for(int i=1;i<=k;i++){
    if(i%2) yellow += i*i;
    else red += i*i;
}
return red - yellow;
}
