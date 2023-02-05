int solution(int product) {
for(int i=1;i<=2000000;i++){
    int temp = i;
    int pro = 1;
    while(temp>0){
        pro *= temp%10;
        temp/=10;
    }
    if(pro == product) return i;
}
return -1;
}
