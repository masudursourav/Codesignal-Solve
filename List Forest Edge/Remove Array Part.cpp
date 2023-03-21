vector<int> solution(vector<int> inputArray, int l, int r) {
vector<int>ans;
for(int i=0;i<inputArray.size();i++){
    if(i<l || i>r){
        ans.push_back(inputArray[i]);
    }
}
return ans;
}
