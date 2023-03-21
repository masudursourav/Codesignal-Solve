string solution(string inputString) {
string ans = "";
for(int i=0;i<inputString.size();i++){
    ans+= char('z' - (inputString[i]-'a'));
}
return ans;
}
