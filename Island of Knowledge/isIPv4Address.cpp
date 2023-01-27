bool solution(string inputString) {
 vector<string> temp;
 int dot = 0;
 for(int i=0;i<inputString[i];i++) if(inputString[i]=='.') ++dot;
 if(dot != 3) return false;
 for(int i=0;i<inputString.size();i++){
     string chek = "";
     while(i<inputString.size() && inputString[i]!='.'){
         if( !isdigit(inputString[i])){
             return false;
         }
         chek +=inputString[i];
         ++i;
         
     }
     if(chek == "" || chek.size()>3 || stoi(chek)<0 || stoi(chek)>255 || chek == "00" || chek =="01") return false;
      
 }
 return true;
}
