vector<int> solution(vector<int> a) {
  vector<int>temp;
  for(int i=0;i<a.size();i++) if(a[i]>=0) temp.push_back(a[i]);
  sort(temp.begin(),temp.end());
  vector<int>ans;
  int j=0;
  for(int i=0;i<a.size();i++){
      if(j<temp.size() && a[i]>=0) ans.push_back(temp[j]),++j;
      else ans.push_back(a[i]);
  }
  return ans;
}
