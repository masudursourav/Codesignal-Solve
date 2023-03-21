int solution(vector<int> votes, int k) {
    int mx=votes[0],cnt=0,same = 0;
    for(int i=0;i<votes.size();i++){
        if(votes[i]>mx){
            mx = votes[i];
        }
    }
    for(int i=0;i<votes.size();i++){
        if(votes[i]+k>mx){
                ++cnt;
        }
        else if(votes[i]+k==mx){
            ++same;
        }
    }
    if(cnt==0 && same==1) return 1;
    return cnt;
}
