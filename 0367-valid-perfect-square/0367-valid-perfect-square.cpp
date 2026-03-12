class Solution {
public:
    bool isPerfectSquare(int num) {
        // sol 1 sqrt fxns
        // if(num<0) return false;
        // if(num==1)    return true;
        
        // long long int sr=sqrt(num);
        // if(sr*sr==num)    return true;
        // return false;

        //sol2 ceil and floor fxns
    //     if(ceil((double)sqrt(num))==floor((double)sqrt(num)))   return true;
    //     return false;
    // }


    // sol3 binary search
    if(num<0) return false;
    if(num==1)    return true;
    int left=1,right=num;
    while(left<=right){
        long long int mid=left+(right-left)/2;
        if(mid*mid==num)    return true;
        else if(mid*mid<num)    left=mid+1;
        else right=mid-1;
    }
        return false;}


    // sol4 1+3=4
    //1+3+5=9
    // if(num<=0)    return false;
    // if(num==1)    return true;
    // int odd=1;
    // while(num>0){
    //     num-=odd;
    //     odd+=2;
    // } 
    // return num==0;
    // }
};