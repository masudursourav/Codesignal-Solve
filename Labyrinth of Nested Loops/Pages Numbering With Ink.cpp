int solution(int current, int numberOfDigits) {
for(int i=current;;i++){
    int temp = i;
    int digicnt = 0;
    while(temp>0){
        temp/=10;
        ++digicnt;
    }
    numberOfDigits -= digicnt;
    if(numberOfDigits == 0){
        return i;
    }
    else if(numberOfDigits<0) return i-1;
}
return 0;
}
