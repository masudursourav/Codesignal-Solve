int solution(vector<int> inputArray) {
int sum = 0;
for(int i=0;i<inputArray.size();i++){
    sum+=inputArray[i];
    if(inputArray[i]==0) break;
}
return sum;
}
