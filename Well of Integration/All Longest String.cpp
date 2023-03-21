vector<string> solution(vector<string> inputArray) {
vector<string>ans;
int mx = 0;
for(int i=0;i<inputArray.size();i++){
    if(inputArray[i].size()>mx){
        mx = inputArray[i].size();
    }
}
for(int i=0;i<inputArray.size();i++){
    if(inputArray[i].size()==mx) ans.push_back(inputArray[i]);
}
return ans;
}
