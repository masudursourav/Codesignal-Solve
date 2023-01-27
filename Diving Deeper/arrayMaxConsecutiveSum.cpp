int solution(vector<int> inputArray, int k) {
 for(int i=1;i<inputArray.size();i++){
     inputArray[i]+=inputArray[i-1];
 }
 int j=0;
  int mx = inputArray[k-1];
 for(int i=k;i<inputArray.size();i++,j++){
     mx=max(mx,inputArray[i]-inputArray[j]);
 }
 return mx;
}
