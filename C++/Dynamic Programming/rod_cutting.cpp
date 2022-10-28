#include<bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Forr(i,a,b) for(ll i=a;i>=b;i--)
#define all(a) (a).begin(), (a).end()
#define sz(a) ((long long)(a).size())

class Solution
{
public:
    int minCost(int n, vector<int>& cuts)
    {
        int c = sz(cuts);

        cuts.P_B(0);
        cuts.P_B(n);
        sort(all(cuts));

        vector<vi> dp(c + 2, vi(c + 2, 0));

        Forr(i, c, 1)
        {
            For(j, 1, c + 1)
            {
                if(i > j)
                    continue;

                int ans = 1e7;

                For(k, i, j + 1)
                {
                    int cost = cuts[j + 1] - cuts[i - 1] + dp[i][k - 1] + dp[k + 1][j];
                    ans = min(ans, cost);

                }

                dp[i][j] = ans;

            }

        }

        return dp[1][c];

    }
};
