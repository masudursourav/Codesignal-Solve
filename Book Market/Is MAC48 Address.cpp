bool solution(string inputString) {
    if(inputString.size() != 17) return false;
for(int i=0;i<inputString.size();i++){
    if(i%3 == 2){
        if(inputString[i]!='-') return false;
    }
    else{
        if(!((inputString[i]>='A' && inputString[i]<='F') ||(inputString[i]>='0' && inputString[i]<='9'))) 
        return false;
    }
}
return true;
}
