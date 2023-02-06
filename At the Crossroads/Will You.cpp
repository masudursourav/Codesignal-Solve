bool solution(bool young, bool beautiful, bool loved) {
if(young && beautiful && loved) return false;
else if(loved) return true;
else if(!young && !beautiful && !loved) return false;
if(young && beautiful) return true;
return false;
}
