bool solution(int n) {
if(n==1) return true;
if(n<4) return false;
for(int i=2;i<=sqrt(n);i++){
    int temp = n;
    while(temp%i==0){
        temp/=i;
    }
    if(temp==1){
         return true;
    }
}
return false;
}
