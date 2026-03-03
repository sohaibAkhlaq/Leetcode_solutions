class Solution {
public:
    string rev(string s){
        int i = 0;
        int j = s.size() - 1;
        while(i < j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
        return s;
    }

    string inv(string s){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0') s[i] = '1';
            else s[i] = '0';
        }
        return s;
    }

    char findKthBit(int n, int k) {
        string s[n];
        s[0] = "0";
        
        for(int i = 1; i < n; i++){
            s[i] = s[i-1] + "1" + rev(inv(s[i-1]));
        }
        
        return s[n-1][k-1];
    }
};