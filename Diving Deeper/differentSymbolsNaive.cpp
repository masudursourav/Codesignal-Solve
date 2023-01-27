int solution(string s) {
int a[26]={0};
for(int i=0;i<s.size();i++){
    ++a[s[i]-'a'];
}
int cnt = 0;
for(int i=0;i<26;i++){
    if(a[i]>0) ++cnt;
}
return cnt;
}
