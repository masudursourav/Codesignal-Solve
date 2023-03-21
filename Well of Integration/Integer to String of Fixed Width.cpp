string solution(int number, int width) {
string ans = "";
while(width>0){
    char temp = ((number%10) + '0');
    ans = temp +  ans;
    number/=10;
    --width;
}
return ans;
}
