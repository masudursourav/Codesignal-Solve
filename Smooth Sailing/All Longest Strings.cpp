vector<string> solution(vector<string> inputArray) {
  int mx = 0;
  vector<string> ans;
  for(int i=0;i<inputArray.size();i++) if(inputArray[i].size()>mx) mx=inputArray[i].size();
  for(int i=0;i<inputArray.size();i++){
      if(inputArray[i].size() == mx) ans.push_back(inputArray[i]);
  }
  return ans;
}
