class Solution {
public:
    int mySqrt(int x) {
        int s = 1, e = x/2 + 1;


        while(s<=e){
            long mid = s + (e-s)/2;
            if(mid*mid == x){
                return mid;
            }else if(mid*mid < x){
                s = mid + 1;
            }else{
                e = mid - 1;
            }
        }
        return s-1;
    }
};