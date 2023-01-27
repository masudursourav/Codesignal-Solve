bool solution(string name) {
if(name[0]>='0' && name[0]<= '9') return false;
for(int i=0;i<name.size();i++){
    if((name[i]<='9' && name[i]>='0') || (name[i]>='a'&& name[i]<='z')
    || (name[i]>='A' && name[i]<='Z') || name[i]=='_'){
        
    }
    else{
        return false;
    }
}
return true;
}
