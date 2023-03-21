int solution(vector<int> coins, int price) {
int ans = 0;
for(int i=coins.size()-1;i>=0;i--){
    ans += price / coins[i];
    price = price % coins[i];
    
}
return ans;
}
