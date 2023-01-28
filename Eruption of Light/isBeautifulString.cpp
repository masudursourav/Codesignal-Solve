bool solution(string inputString) {
    int a[26]={0};
    for(int i=0;i<inputString.size();i++){
        ++a[inputString[i]-'a'];
    }
    for(int i=0;i<25;i++){
        if(a[i]<a[i+1]) return false;
    }
    return true;
}
