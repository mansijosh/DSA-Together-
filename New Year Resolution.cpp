/*As the clock struck midnight on New Year's Eve, Geek bid farewell to the wasted moments of 2023, realizing the untapped potential of GFG's Problem of the Day. His 2024 resolution: Solve POTD every day.
Eager to earn coins for GFG Merchandise, Geek faces new rules:
Earning Coin: Geek can accumulate coins[i] by solving the POTD on the ith day, where 1 <= coins[i] <= 2024 and the sum of coins <= 2024.
Merchandise Eligibility: To purchase merchandise, the coins earned must be divisible by 20 or 24, or precisely equal to 2024.
Geek's resolutions often fades over time. Realistically, he can only commit to active participation for N (where N ≤ 366) days. Given the value of N and number of coins associated with each POTD, 
can Geek strategically solve some (or all) POTDs to become eligible for redeeming merchandise?*/


class Solution{
    public:
    int isPossible(int N , int coins[]){
        int total = accumulate(coins, coins + N, 0);
        vector<vector<bool>> possibility(N + 1, vector<bool>(total + 1));
        for(int i = 0; i <= N; i++){
            possibility[i][0] = true;
        }
        for(int i = 1; i <= total; i++){
            possibility[0][i] = false;
        }
        for(int idx = 1; idx <= N; idx++){
            for(int sum = 1; sum <= total; sum++){
                if(sum < coins[idx - 1])
                    possibility[idx][sum] = possibility[idx - 1][sum];
                if(sum >= coins[idx - 1])
                    possibility[idx][sum] = possibility[idx - 1][sum]
                                   or possibility[idx - 1][sum - coins[idx - 1]];
            }
        }
        for(int sum = 1; sum <= total; sum++){
            if((sum%20 == 0 or sum%24 == 0 or sum == 2024) and possibility[N][sum])
                return true;
        }
        return false;
}
};
