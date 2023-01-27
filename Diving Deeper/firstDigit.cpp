char solution(string inputString) {
for(int i=0;i<inputString.size();i++){
    if(inputString[i]>='0' && inputString[i]<='9'){
        return inputString[i];
    }
}
return inputString[0];
}
