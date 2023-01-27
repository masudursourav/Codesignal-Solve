bool solution(vector<int> sequence) {
   int remove = 0;
   int mx = INT_MIN,pre_mx = INT_MIN;
   for(int i=0;i<sequence.size();i++){
       if(sequence[i]>mx){
           pre_mx = mx;
           mx = sequence[i];
       }
       else if(sequence[i] > pre_mx){
           pre_mx = mx;
           mx = sequence[i];
           ++remove;
       }
       else{
           ++remove;
       }
   }
   return remove <= 1 ? true:false;
}
