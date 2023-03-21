bool solution(string ver1, string ver2) {
vector<string> a,b;
string temp = "";
for(int i=0;i<ver1.size();i++){
    if(ver1[i]=='.'){
        a.push_back(temp);
        temp = "";
    }
    else{
        temp += ver1[i];
    }
}
if(temp.size()>0) a.push_back(temp);
temp = "";
for(int i=0;i<ver2.size();i++){
    if(ver2[i]=='.'){
        b.push_back(temp);
        temp = "";
    }
    else{
        temp += ver2[i];
    }
}
if(temp.size()>0) b.push_back(temp);
for(int i=0;i<a.size();i++){
    cout<<b[i]<<"\n";
    if(stoi(a[i])>stoi(b[i])) return true;
    else if(stoi(a[i])<stoi(b[i])) return false;
}
return false;
}
