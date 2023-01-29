string solution(string s) {
int cnt = 1;
string ans = "";
for(int i=0;i<s.size()-1;i++){
    cnt = 1;
    while(s[i]==s[i+1]){
        ++i;
        ++cnt;
    }
    if(cnt>1){
     ans+=to_string(cnt);
     ans+= s[i];   
    }
    else{
        ans +=s[i];
    }
}
if(s[s.size()-2]!=s[s.size()-1])
ans += s[s.size()-1];  
return ans;
}
