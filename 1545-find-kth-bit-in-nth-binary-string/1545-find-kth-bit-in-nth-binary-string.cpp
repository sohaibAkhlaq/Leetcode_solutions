class Solution {
public:

    int lengthOf(int n){
        if(n == 1) return 1;
        return 2 * lengthOf(n-1) + 1;
    }

    char solve(int n, int k){
        if(n == 1) return '0';

        int prevLen = lengthOf(n-1);
        int mid = prevLen + 1;

        if(k == mid) return '1';

        if(k < mid){
            return solve(n-1, k);
        }
        else{
            int totalLen = 2 * prevLen + 1;
            int newK = totalLen - k + 1;   // correct mirror
            char ch = solve(n-1, newK);

            if(ch == '0') return '1';
            else return '0';
        }
    }

    char findKthBit(int n, int k) {
        return solve(n, k);
    }
};