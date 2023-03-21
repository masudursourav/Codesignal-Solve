std::vector<int> format(std::string s) {
    map<char, int> mapping;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (mapping.find(ch) == mapping.end()) {
            mapping[ch] = 0;
        }
        mapping[ch]++;
    }
    vector<int> res;
    for (auto it: mapping) {
        res.push_back(it.second);
    }
    sort(res.begin(), res.end());
    return res;
}

int solution(std::string s) {
    using namespace std;
    int top = ceil(sqrt(pow(10, s.length())));
    int bottom = floor(sqrt(pow(10, s.length() - 1) - 1));
    vector<int> vs = format(s);
    for (int num = top; num >= bottom; num--) {
        long long res = num;
        res *= res;
        stringstream ss;
        ss << res;
        string t = ss.str();
        vector<int> vt = format(t);
        if (vs.size() == vt.size()) {
            bool equal = true;
            for (int i = 0; i < vs.size(); i++) {
                if (vs[i] != vt[i]) {
                    equal = false;
                    break;
                }
            }
            if (equal) return res;
        }
    }
    return -1;
}