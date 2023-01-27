int diff(string s1,string s2){
    int cnt = 0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]) ++cnt;
    }
    return cnt;
}
bool check(vector<string> a){
    for(int i=0;i<a.size()-1;i++){
        if(diff(a[i],a[i+1])!=1){
            return false;
        }
    }
    return true;
}

bool solution(vector<string> inputArray) {
sort(inputArray.begin(),inputArray.end());
if(check(inputArray)){
    return true;
}
while(next_permutation(inputArray.begin(),inputArray.end())){
    if(check(inputArray)){
        return true;
    }
}
   return false;
}
