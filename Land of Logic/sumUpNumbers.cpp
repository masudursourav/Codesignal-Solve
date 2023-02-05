int solution(string inputString) {
string temp = "";
int ans=0;
for(int i=0;i<inputString.size();i++){
    if(inputString[i]>='0' && inputString[i]<='9'){
        temp += inputString[i];
    }
    else{
        if(temp!=""){
            ans+= stoi(temp);
        }
        temp = "";
    }
}
if(temp.size()!=0){
    ans+= stoi(temp);
}
return ans;
}
