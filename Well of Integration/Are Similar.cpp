bool solution(vector<int> a, vector<int> b) {
if(a == b) return true;
int cnt = 0;
vector<int>cnta(1001,0),cntb(1001,0);
for(int i=0;i<a.size();i++) ++cnta[a[i]];
for(int i=0;i<b.size();i++) ++cntb[b[i]];
if(cnta != cntb) return false;
for(int i=0;i<a.size();i++){
    if(a[i]!=b[i]) ++cnt;
}
if(cnt>2) return false;
return true;
}
