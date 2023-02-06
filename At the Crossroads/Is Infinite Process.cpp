bool solution(int a, int b) {
if(a>b){
    return true;
}
else if(b>a && (b-a)%2==1){
    return true;
}
return false;
}
