int solution(vector<int> a) {
bool group[1000001];
memset(group,false,sizeof(group));
for(int i=0;i<a.size();i++){
    group[(a[i] - 1)/10000] = true;
}
int cnt = 0;
for(int i=0;i<1000001;i++) cnt += group[i];
return cnt + a.size();
}
