vector<string> solution(char number) {
vector<string>ans;
int i = 0 , j= number - 'A';
int numint = number - 'A';
while(i<=j){
    if(i+j == numint){
        char temp1 =  char('A' + i);
        char temp2 =  char('A' + j);
        string temp=""; temp += temp1; temp += " + "; temp +=temp2; 
        cout<<temp<<"\n";
        ans.push_back(temp);
    }
    ++i;
    --j;
}
return ans;
}
