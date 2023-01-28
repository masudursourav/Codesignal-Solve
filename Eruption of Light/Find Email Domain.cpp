string solution(string address) {
string domain = "";
bool found = false;
for(int i=0;i<address.size();i++){
    if(found){
        domain += address[i];
    }
    if(address[i]=='@'){
        found = true;
        domain = "";
    }
}
return domain;
}
