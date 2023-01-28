string solution(string st) {
     string sub = "";
     string temp = st;
     reverse(temp.begin(),temp.end());
     if(temp == st){
         return st;
     }
     for(int i=0;i<st.size();i++){
         sub = st[i] + sub;
         temp = st + sub;
         string temp2 = temp;
         reverse(temp2.begin(),temp2.end());
         if(temp2 == temp){
             return temp;
         } 
     }
     return "";
}
