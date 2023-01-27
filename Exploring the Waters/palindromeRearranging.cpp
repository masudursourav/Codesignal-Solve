bool solution(string inputString) {
int a[26]={0};
for(int i=0;i<inputString.size();i++) ++a[inputString[i]-'a'];
int odd = 0;
for(int i=0;i<26;i++) if(a[i]%2) ++odd;
return odd <=1 ? true:false;
}
