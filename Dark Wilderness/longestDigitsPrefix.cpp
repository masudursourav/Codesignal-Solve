string solution(string inputString) {
    string ans="";
    for(int i=0;i<inputString.size();i++){
        if(inputString[i]>='0' && inputString[i] <= '9'){
            ans+=inputString[i];
        }
        else{
            break;
        }
    }
    return ans;
}
