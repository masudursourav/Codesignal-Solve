string solution(string inputString) {
        vector<string>temp;
        string ans="";
        for(int i=0;i<inputString.size();i++){
            if(inputString[i]=='('){
                temp.push_back(ans);
                ans="";
            }
            else if(inputString[i]==')'){
                reverse(ans.begin(),ans.end());
                ans = temp.back() + ans;
                temp.pop_back();
            }
            else{
                ans+=inputString[i];
            }
        }
        return ans;
}
