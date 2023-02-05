bool solution(string time) {
if(time[0]>'2' || (time[0]=='2' && time[1]>'3')) return false;
else if(time[0]=='1' && (time[1]>'9' || time[1]<'0')) return false;
else if((time[3]<0 || time[3]>'5') || (time[4]>'9' || time[4]<'0') ) return false;
return true;

}
