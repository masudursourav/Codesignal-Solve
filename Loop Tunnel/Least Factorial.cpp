int solution(int n) {
for(int i=1;i<=6;i++){
   int fact = 1;
   for(int j=1;j<=i;j++){
       fact*=j;
   }
   if(fact >= n){
       return fact;
   }
    
}
return 1;
}
