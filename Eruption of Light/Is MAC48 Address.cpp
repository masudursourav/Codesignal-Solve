bool solution(string inputString) {
if(inputString.size() != 17) return false;
for(int i=0;i<inputString.size();i++){
    if(i%3==0 || i%3==1){
        if(!((inputString[i]>='0' && inputString[i]<='9') || (inputString[i]>='A' && inputString[i]<='F'))){
            return false;
        }
    }
    else{
        if(inputString[i]!='-') return false;
    }
}
return true;
}
