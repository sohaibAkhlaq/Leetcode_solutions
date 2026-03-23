class Solution {
public:

    vector<string> ans;
    vector<string> mp;

    void rec(string &digits, int i, string &temp) {
        if (i == digits.size()) {
            ans.push_back(temp);
            return;
        }

        string s = mp[digits[i] - '0'];
        for (int j = 0; j < s.size(); j++) {
            temp.push_back(s[j]);
            rec(digits, i + 1, temp);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) return {};

        mp = vector<string>(10);
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";

        string temp = "";
        rec(digits, 0, temp);
        return ans;
    }
};



