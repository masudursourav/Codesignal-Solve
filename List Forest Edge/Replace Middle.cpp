vector<int> solution(vector<int> arr) {
if(arr.size()%2) return arr;
vector<int>ans;
int mid = arr[arr.size()/2] + arr[arr.size()/2 - 1];
for(int i=0;i<arr.size();i++){
    if(i == arr.size()/2 - 1){
        ans.push_back(mid);
    }
    else if(i == arr.size()/2){
        continue;
    }
    else{
        ans.push_back(arr[i]);
    }
}
return ans;
}
