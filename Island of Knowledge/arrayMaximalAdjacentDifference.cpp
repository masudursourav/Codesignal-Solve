int solution(vector<int> inputArray) {
 int ans = -100;
 for(int i=0;i<inputArray.size()-1;i++){
     int sum = abs(inputArray[i] - inputArray[i+1]);
     if(sum >= ans) ans = sum;
 }
 return ans;
}
