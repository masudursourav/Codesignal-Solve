int solution(int value1, int weight1, int value2, int weight2, int maxW) {
if(weight1 + weight2 <= maxW) return value1 + value2;
else if(value1 > value2 && weight1 <= maxW) return value1;
else if(weight2 <= maxW) return value2;
else if(weight1 <= maxW) return value1;
return 0;
}
