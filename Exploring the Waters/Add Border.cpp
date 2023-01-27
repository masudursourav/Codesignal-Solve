vector<string> solution(vector<string> picture) {
  vector<string>ans;
  int mx = 0;
  for(int i=0;i<picture.size();i++) if(picture[i].size()>mx) mx=picture[i].size();
  string se="";
  for(int i=0;i<mx+2;i++) se+='*';
  ans.push_back(se);
  for(int i=0;i<picture.size();i++){
      string temp =picture[i];
      temp = '*' + temp;
      temp+='*';
      ans.push_back(temp);
  }
  ans.push_back(se);
  return ans;
}
