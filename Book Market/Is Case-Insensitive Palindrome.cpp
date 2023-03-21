bool solution(string inputString) {
int i=0,j=inputString.size()-1;
while(i<j){
    if(inputString[i]>='A' && inputString[i]<='Z'){
        inputString[i] = char(inputString[i] + 32);
    }
    if(inputString[j]>='A' && inputString[j]<='Z'){
        inputString[j] = char(inputString[j] + 32);
    }
    if(inputString[i]!=inputString[j]) return false;
    ++i;
    --j;
}
return true;
}
