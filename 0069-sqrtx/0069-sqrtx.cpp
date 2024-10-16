class Solution {
public:
    int mySqrt(int x) {
        int s = 1;
        int e = x/2 + 1;
        int mid = -1;

        while(s<=e){
            mid = s + (e-s)/2;
            if((long)mid*mid == (long)x){
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