
std::string solution(std::string message) {
string x;
int s=0;
x+=message[0];
for(int i=1;i<message.size();i++){
s=message[i]-'a';
s+=26;
s-=(message[i-1]-'a');
s%=26;
x+=(s+'a');
}
return x;
}