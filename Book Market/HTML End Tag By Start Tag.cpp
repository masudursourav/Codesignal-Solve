string solution(string startTag) {
string ans = "</";
for(int i=0;i<=startTag.size();i++){
    if(startTag[i]>='a' && startTag[i]<='z' || startTag[i]>='A' && startTag[i]<='Z' || startTag[i]>='0' && startTag[i]<='9'){
        ans += startTag[i];
    }
    else if(startTag[i]==' '){
        ans+='>';
        return ans;
    }
    
}
ans+='>';
return ans;
}
