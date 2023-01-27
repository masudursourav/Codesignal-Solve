bool solution(vector<int> a, vector<int> b) {
if(a.size() != b.size()) return false;
int swaped = 0;
for(int i=0;i<a.size();i++) if(a[i]!=b[i]) ++swaped;
sort(a.begin(),a.end()),sort(b.begin(),b.end());
return swaped <=2 && a==b ? true:false;
}
