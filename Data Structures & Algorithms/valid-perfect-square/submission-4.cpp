class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num < 2) return true;
       
        int left = 1 , right = num / 2;

        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            long long powerOfNum = mid * mid;

            if(powerOfNum == num)
                return true;

            if(powerOfNum > num)
            {
                // go to left 
                right = mid - 1;
            }
            else
            {
                // go to right 
                left = mid + 1;
            }
        }

        return false;
    }
};