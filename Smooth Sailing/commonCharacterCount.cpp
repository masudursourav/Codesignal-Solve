int solution(string s1, string s2) {
int a[26] = {0},b[26]={0};
for(int i=0;i<s1.size();i++) ++a[s1[i]-'a'];
for(int i=0;i<s2.size();i++) ++b[s2[i]-'a'];
int ans=0;
for(int i=0;i<26;i++){
    ans+=min(a[i],b[i]);
}
return ans;
}
