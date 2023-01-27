int solution(int year) {
  if(year % 100){
      year/=100;
      year += 1;
      return year;
  }
  return year/100;
}
