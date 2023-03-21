bool solution(vector<int> arr) {
if(arr.size()%2==0){
   int mid = arr[arr.size()/2] + arr[arr.size()/2 -1];
   return mid == arr[0] && mid == arr[arr.size()-1]; 
}
int mid = arr[arr.size()/2];
 return mid == arr[0] && mid == arr[arr.size()-1]; 
}
