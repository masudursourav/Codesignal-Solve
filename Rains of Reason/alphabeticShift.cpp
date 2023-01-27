string solution(string inputString) {
for(int i=0;i<inputString.size();i++){
    inputString[i] = 'a' +((inputString[i]-'a') + 1)%26;
}
return inputString;
}
