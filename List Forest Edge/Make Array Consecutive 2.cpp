int solution(vector<int> statues) {
int arr[21]={0},mx=0;
for(int i=0;i<statues.size();i++){
    ++arr[statues[i]];
    mx=max(mx,statues[i]);
}
bool k = false;
int cnt = 0;
for(int i=0;i<21;i++){
    if(k==true && i<mx && arr[i]==0){
        ++cnt;
    }
    else if(arr[i]!=0){
        k=true;
    }
}
return cnt;
}
