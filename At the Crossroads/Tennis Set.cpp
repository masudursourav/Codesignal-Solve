bool solution(int score1, int score2) {
if(score1 == score2){
    return false;
}
else if(max(score1,score2)==6 && min(score1,score2)<5){
    return true;
}
else if(max(score1,score2)==7 && min(score1,score2)>=5){
    return true;
}

return false;
}
