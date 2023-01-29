string solution(string text) {
    string temp="",ans="";
    for(int i=0;i<text.size();i++){
        if((text[i]>='a' && text[i]<='z') || (text[i]>='A' && text[i]<='Z')){
            temp+=text[i];
        }
        else{
            if(temp.size()>ans.size()){
                ans=temp;
                cout<<ans<<"\n";
            }
            temp="";
        }
    }
    if(temp.size()>ans.size()){
                ans=temp;
    }
    return ans;
}
