vector<int> solution(vector<int> inputArray, int k) {
if(k==inputArray.size()){
    inputArray.pop_back();
}
else{
    int i=1;
    int n= inputArray.size();
    while(k*i<=n){
        int pos = k*i;
        inputArray.erase(inputArray.begin()+pos-i);\
        cout<<i<<"\n";
        ++i;
    }
}
return inputArray;
}
