int rangeSum(int a, int b)
{
    return (b * (b + 1)) / 2 - ((a - 1) * a) / 2;    
}

int solution(int n) 
{
    int res = 0;
    for (int i = 1; i <= n - 1; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            if (rangeSum(i, j) == n) {
                ++res;
            }
        }
    }
    return res;
}