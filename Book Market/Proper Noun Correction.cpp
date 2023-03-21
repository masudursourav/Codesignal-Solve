string solution(string noun) {
if(noun[0]>='a' && noun[0]<='z'){
    noun[0] = char(noun[0] - 32);
}
for(int i=1;i<noun.size();i++){
    if(noun[i]>='A' && noun[i]<='Z'){
        noun[i] = char(noun[i] + 32);
    }
}
return noun;
}
