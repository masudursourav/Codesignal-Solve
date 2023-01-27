int solution(vector<int> inputArray) {
int mx = INT_MIN;
for(int i=1;i<inputArray.size();i++){
    int product = inputArray[i] * inputArray[i-1];
    if(product > mx) mx = product;
}
return mx;
}
