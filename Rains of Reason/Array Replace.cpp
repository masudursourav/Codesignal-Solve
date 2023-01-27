vector<int> solution(vector<int> inputArray, int elemToReplace, int substitutionElem) {
vector<int>ans;
for(int i=0;i<inputArray.size();i++){
    if(inputArray[i]==elemToReplace) ans.push_back(substitutionElem);
    else ans.push_back(inputArray[i]);
}
return ans;
}
