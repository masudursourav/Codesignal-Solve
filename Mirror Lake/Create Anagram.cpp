int solution(string s, string t) {
int a[26] = {0} , b[26] = {0};
for(int i=0;i<s.size();i++) ++a[s[i]-'A'];
for(int i=0;i<t.size();i++) ++b[t[i]-'A'];
int cnt = 0;
for(int i = 0;i < 26; i++){
    cnt += abs(a[i]-b[i]);
}
return cnt/2;
}
