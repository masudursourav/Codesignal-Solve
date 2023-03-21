bool solution(string filename1, string filename2) {
string s1="",s2="";
for(int i=0;i<filename1.size();i++){
    s1 += tolower(filename1[i]);
}
for(int i=0;i<filename2.size();i++){
    s2 += tolower(filename2[i]);
}
return s1 < s2 != filename1 < filename2;
}
