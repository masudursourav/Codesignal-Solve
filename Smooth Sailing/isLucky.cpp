bool solution(int n) {
string s = to_string(n);
int first = 0,second = 0;
for(int i=0;i<s.size()/2;i++) first += (s[i]-'0');
for(int i=s.size()/2;i<s.size();i++) second += (s[i]-'0');
return first == second ? true:false;
}
