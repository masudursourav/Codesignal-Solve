bool solution(string inputString) {
int n = inputString.size();
return n%2 == 0 && inputString.substr(0,n/2) == inputString.substr(n/2,n/2);
}
