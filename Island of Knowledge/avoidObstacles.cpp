int solution(vector<int> inputArray) {
 sort(inputArray.begin(),inputArray.end());
 int ans = 1;
 while(ans<=inputArray[inputArray.size()-1]){
     bool k =true;
     for(int i:inputArray){
         if(i%ans==0) {
             ++ans;
             k=false;
             break;
         }
     }
     if(k) break;
 }
 return ans;
 
}
