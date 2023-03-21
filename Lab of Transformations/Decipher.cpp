string solution(string cipher) {
    string ans="";
for(int i=0;i<cipher.size();i++){
    string temp = "";
    if(cipher[i]=='1'){
        temp += cipher[i];
        temp += cipher[i+1];
        temp += cipher[i+2];
        int a = stoi(temp);
        char c = a;
        ans += c;
        i += 2;
    }
    else{
       temp += cipher[i];
       temp += cipher[i+1]; 
       int a = stoi(temp);
       char c = a;
       ans += c;
       ++i;
    }
}
return ans;
}
