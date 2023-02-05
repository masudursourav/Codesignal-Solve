int solution(int divisor, int bound) {
if(bound % divisor) return bound - (bound % divisor);
return bound;
}
