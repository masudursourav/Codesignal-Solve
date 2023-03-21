int solution(int param1, int param2) {
string s="";
if(param1 ==0 && param2==0) return 0;
while(param1 || param2){
    int temp = param1%10 + param2%10;
    temp %= 10;
    char c = (temp + '0');
    s = c + s;
    param1 /= 10;
    param2 /= 10;
}
return stoi(s);
}
