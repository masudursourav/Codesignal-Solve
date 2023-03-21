bool solution(string string1, string string2) {
map<char,char>m;
map<char,char>tm;
for(int i=0;i<string1.size();i++){
    if(m.find(string1[i]) !=m.end()){
        if(m[string1[i]]!=string2[i]) return false;
    }
    else{
        if(tm.find(string2[i])!=tm.end()){
            if(tm[string2[i]]!=string1[i]) return false;;
        }
        m[string1[i]] = string2[i];
        tm[string2[i]]=string1[i];
    }
}
return true;
}
