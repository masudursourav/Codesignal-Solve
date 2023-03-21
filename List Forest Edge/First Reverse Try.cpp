vector<int> solution(vector<int> arr) {
int i=0,j=arr.size()-1;
if(arr.size()==0) return arr;
swap(arr[i],arr[j]);
return arr;
}
