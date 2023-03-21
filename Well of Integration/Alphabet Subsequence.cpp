bool solution(string s) {
for(int i=0;i<s.size()-1;i++){
    if((s[i]-'a')>=(s[i+1]-'a')){
        return false;
    }
}
return true;
}
