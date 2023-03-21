int solution(int candlesNumber, int makeNew) {
    int ans =  candlesNumber;
while(candlesNumber >= makeNew){
    ans += candlesNumber / makeNew;
    candlesNumber = (candlesNumber/makeNew) + (candlesNumber % makeNew);
}
return ans;
}
