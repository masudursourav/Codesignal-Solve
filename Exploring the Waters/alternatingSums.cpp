vector<int> solution(vector<int> a) {
vector<int>ans(2,0);
for(int i=0;i<a.size();i++){
    if(i%2==0){
        ans[0]+=a[i];
    }
    else{
        ans[1]+=a[i];
    }
}
return ans;
}
