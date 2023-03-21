int solution(vector<int> divisors, int k) {
int cnt = 0;
bool a[11] = {false};
for(int i=1;i<=k;i++){
    if(a[i]==false){
        ++cnt;
    for(int j=i+1;j<=k;j++){
        bool divi = false,check = true,ndivi = false;;
        for(int l=0;l<divisors.size();l++){
            if(i%divisors[l]==0 && j%divisors[l]!=0 || i%divisors[l]!=0 && j%divisors[l]==0){
                check = false;
                break;
            }
        }
        if(check){
            a[j] = true;
        }
    }
    }
}
return cnt;
}
