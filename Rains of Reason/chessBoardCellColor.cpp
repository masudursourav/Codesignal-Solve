bool solution(string cell1, string cell2) {
if((cell1[0]-'A')%2==(cell2[0]-'A')%2 && cell1[1]%2==cell2[1]%2) return true;
if((cell1[0]-'A')%2!=(cell2[0]-'A')%2 && cell1[1]%2!=cell2[1]%2) return true;
return false;
}
