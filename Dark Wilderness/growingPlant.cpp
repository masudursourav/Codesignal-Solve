int solution(int upSpeed, int downSpeed, int desiredHeight) {
int cnt = 1;
desiredHeight -= upSpeed;
while(desiredHeight > 0){
    desiredHeight -= upSpeed;
    desiredHeight += downSpeed;
    ++cnt;
}
return cnt;
}
