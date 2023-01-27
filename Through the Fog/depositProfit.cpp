int solution(int deposit, int rate, int threshold) {
int year = 0;
double depositd = deposit * 1.0;
while(depositd < threshold){
    depositd += (depositd*((rate*1.0)/100.0));
    ++year;
}
return year;
}
