vector<int> solution(int legs) {
    vector<int>ans;
    for(int i=0;i<=legs;++i){
        if(legs - i*2 < 0) break;
        if((legs - i*2) % 4 == 0){
            ans.push_back(i);
        }
    }
    return ans;
}
