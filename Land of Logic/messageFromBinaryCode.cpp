
string solution(string code) {
    string ans = "";
for(int i=0;i<code.size();i+=8){
    string temp = code.substr(i,8);
    int k = stoi(temp,0,2);
    ans+=char (k);
}
return ans;
}
