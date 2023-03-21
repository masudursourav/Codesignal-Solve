int solution(vector<int> a) {
  long long need = 0;
  for (int i = 0; i < a.size(); i++) {
    need += a[i];
  }
  need /= 3;

  int ans = 0;
  int firstPoints = 0;
  long long curSum = 0;
  for (int i = 0; i < (int)a.size() - 1; i++) {
    curSum += a[i];
    if (curSum == need) {
      firstPoints++;
    }
    if (curSum == 2 * need) {
      ans += firstPoints;
      if (need == 0) {
        ans-=1;
      }
    }
  }

  return ans;
}
