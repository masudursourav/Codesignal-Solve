string solution(char symbol) {
if(symbol >= '0' && symbol<='9'){
    if(symbol%2==0) return "even";
    else return "odd";
}
return "not a digit";
}
