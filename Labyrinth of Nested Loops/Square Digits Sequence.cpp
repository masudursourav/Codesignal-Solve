int solution(int a0) {
int cnt = 0;
set<int>s;
while(s.find(a0)==s.end()){
    s.insert(a0);
    int temp = 0;
    while(a0>0){
        temp += ((a0%10) * (a0%10));
        a0 /= 10;
    }
    a0 = temp;
}
return s.size() + 1;
}
