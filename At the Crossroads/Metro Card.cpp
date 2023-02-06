vector<int> solution(int lastNumberOfDays) {
vector<int>ans;
if(lastNumberOfDays >= 28 && lastNumberOfDays<=30){
    ans.push_back(31);
    return ans;
}
ans.push_back(28);
ans.push_back(30);
ans.push_back(31);
return ans;
}
