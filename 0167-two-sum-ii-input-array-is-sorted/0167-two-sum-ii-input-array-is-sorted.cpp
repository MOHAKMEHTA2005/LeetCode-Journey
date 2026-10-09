class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int L = 0;
        int R = numbers.size() - 1;
        int sum = 0;
        while(L < R){
            sum = numbers[L] + numbers[R];
            if(sum == target){
                return {L + 1, R + 1};
            }
            else if(sum < target){
                L++;
            }
            else{
                R--;
            }
        }
        return {};
    }
};