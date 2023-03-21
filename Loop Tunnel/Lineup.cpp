int solution(string commands) {
int res = 0;
    int a, b;
    a = 0, b = 0;
    for (auto c: commands) {
        if (c == 'A') {
            a += 2;
            b += 2;
        } else if (c == 'L') {
            a += 1;
            b += 3;
        } else {
            a += 3;
            b += 1;
        }
        a %= 4;
        b %= 4;
        
        if (a == b) {
            ++res;
        }
    }
    return res;
}
