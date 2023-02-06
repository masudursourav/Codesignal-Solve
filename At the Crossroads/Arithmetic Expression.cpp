bool solution(int a, int b, int c) {
    float d = a*1.0/b*1.0;
if(a+b == c || a - b == c || a*b == c || a/b == c) return true;
return false;
}
