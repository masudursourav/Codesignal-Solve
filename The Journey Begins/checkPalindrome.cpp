bool solution(string inputString) {
 int i=0,j=inputString.size()-1;
 while(i<=j){
     if(inputString[i]!=inputString[j]) return false;
     ++i,--j;
 }
 return true;
}
