bool solution(string bishop, string pawn) {
     return abs((bishop[0]-'a')-(pawn[0]-'a')) == abs((bishop[1]-'1')-(pawn[1]-'1'));
}
