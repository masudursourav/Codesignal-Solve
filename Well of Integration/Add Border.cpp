vector<string> solution(vector<string> picture) {
vector<string>ans;
string fl="";
for(int i=0;i<picture[0].size()+2;i++){
    fl+='*';
}
ans.push_back(fl);
for(int i=0;i<picture.size();i++){
    string temp="*";
    temp+=picture[i];
    temp+='*';
    ans.push_back(temp);
}
ans.push_back(fl);
return ans;
}
