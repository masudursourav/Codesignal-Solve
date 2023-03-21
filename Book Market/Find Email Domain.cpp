string solution(string address) {
bool found = false;
string domain = "";
for(int i=0;i<address.size();i++){
    if(address[i]=='@'){
        domain="";
        found = true;
    }
    else if(found == true) domain += address[i];
}
return domain;
}
