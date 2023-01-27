int solution(vector<int> a) {
   if(a.size()%2==0){
       return a[a.size()/2 -1];
   }
   return a[a.size()/2];
}
