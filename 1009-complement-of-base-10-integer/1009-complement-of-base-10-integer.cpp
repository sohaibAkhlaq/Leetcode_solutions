class Solution {
public:
    

    int bitwiseComplement(int n) {
        if(n==0)return 1;
        int mask=0;
        int num=n;
        while(num){
           mask<<=1;
           mask|=1;
           num>>=1;
        }

        return mask^n;
    }
};