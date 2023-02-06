int solution(int min1, int min2_10, int min11, int s) {
int dur = 0;
if(s>=min1){
    dur += 1;
    s -= min1;
}
for(int i=2;;i++){
      if(s<=0 || (i<=10 && s<min2_10) || (i>10 && s<min11)){
        break;
    }
    if(i>= 2 && i<=10){
            ++dur;
            s-=min2_10;
    }
  
    if(i>=11 && s>=min11){
        ++dur;
        s-=min11;
    }
}
return dur;
}
