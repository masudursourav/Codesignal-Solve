vector<string> solution(vector<string> names) {
set<string>s;
vector<string>ans;
for(int i=0;i<names.size();i++){
    if(s.find(names[i])!=s.end()){
        for(int j=1;;j++){
            string temp = names[i];
            temp+='(';
            temp += to_string(j);
            temp += ')';
            if(s.find(temp)==s.end()){
                ans.push_back(temp);
                s.insert(temp);
                break;
            }
        }
    }
    else{
        ans.push_back(names[i]);
        s.insert(names[i]);
    }
}
return ans;
}
