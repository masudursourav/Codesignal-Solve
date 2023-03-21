bool solution(int n) {
int cnt = 0;
while(n){
    if(n%10 == 0 && cnt==0){
        cnt = 0;
    }
    else if(n%10!=0){
        ++cnt;
    }
    else{
        return true;
    }
    n/=10;
    
    
}
return false;
}
