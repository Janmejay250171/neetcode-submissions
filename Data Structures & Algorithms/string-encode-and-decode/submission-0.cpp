class Solution {
public:
    vector<string>vp;
    string encode(vector<string>& strs) {
        vp=strs;
        return "";
    }

    vector<string> decode(string s) {
        return vp;
    }
};
