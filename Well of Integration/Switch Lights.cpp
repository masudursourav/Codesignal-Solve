vector<int> solution(vector<int> a) {
for(int i=0;i<a.size();i++){
    if(a[i]==1){
        for(int j=0;j<=i;j++){
            if(a[j]==0){
                a[j]=1;
            }
            else{
                a[j] = 0;
            }
        }
    }
}
return a;
}
