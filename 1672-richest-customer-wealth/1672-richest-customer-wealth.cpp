class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for(const auto& customer : accounts)
        {
            int sum_of_row = 0;
            for(const auto& bank : customer)
            {
                sum_of_row += bank;
                maxWealth = max(maxWealth, sum_of_row);
            }
        }
        return maxWealth;
    }
};