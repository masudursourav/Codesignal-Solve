string solution(string note) {
    for(int i=0;i<note.size();i++){
        if(note[i]>='a' && note[i]<='j'){
            note[i] = char(( note[i] - 'a') + '0');
        }
        else if(note[i]>='0' && note[i]<='9'){
            note[i] = char((note[i] - '0') + 'a');
        }
    }
    return note;
}
