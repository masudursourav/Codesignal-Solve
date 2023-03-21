int solution(string a, string b) {
int cnta[26] = {0} , cntb[26] = {0};
for(int i=0;i<a.size();i++) ++cnta[a[i]-'a'];
for(int i=0;i<b.size();i++) ++cntb[b[i]-'a'];
int ans = INT_MAX;
for(int i=0;i<26;i++){ 
    if(cnta[i]!=0 && cntb[i]==0){
        return 0;
    }
    else if(cnta[i]>0 && cntb[i]>0){
        ans = min(ans,cntb[i]/cnta[i]);
    }
}
return ans;
}
