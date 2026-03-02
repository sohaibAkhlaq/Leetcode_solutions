class Solution {
public:
    
    string addBinary(string a, string b) {
       string res="";
       int carry=0,i=a.size()-1,j=b.size()-1;
       while(i>=0 || j>=0 || carry){
        int x=(i>=0)?a[i--]-'0':0;
        int y=(j>=0)?b[j--]-'0':0;

        int sum=x^y^carry;
        res+=(sum+'0');
        carry=(x&y) || (carry&(x^y));
       }
       reverse(res.begin(),res.end());
       return res;
    }
};