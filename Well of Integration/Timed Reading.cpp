int solution(int maxLength, string text) {
vector<string>ans;
string temp = "";
for(int i=0;i<text.size();i++){
    if((text[i]>='a' && text[i]<='z') || (text[i]>='A' && text[i]<='Z')){
       temp+=text[i]; 
    }
    else{
        if(temp.size()>0 && temp.size()<=maxLength) ans.push_back(temp);
        temp = "";
    }
}
if(temp.size()>0 && temp.size()<=maxLength) ans.push_back(temp);
return ans.size();
}
