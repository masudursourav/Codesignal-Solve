vector<int> solution(vector<int> a, vector<int> b) {
vector<int>ans;
ans = a;
for(int i=0;i<b.size();i++) ans.push_back(b[i]);
return ans;
}
