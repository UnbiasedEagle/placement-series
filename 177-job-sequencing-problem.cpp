#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define inf 1e18
#define endl "\n"

class Job
{
public:
    int taskId, deadline, profit;

    bool operator==(const Job &p) const
    {
        return taskId == p.taskId && deadline == p.deadline && profit == p.profit;
    }
};

unordered_set<int> scheduleJobs(vector<Job> jobs)
{
    // Write your code here...
    vector<int> track(1001, -1);

    sort(jobs.begin(), jobs.end(), [](Job &a, Job &b)
         { return b.profit < a.profit; });

    for (int i = 0; i < jobs.size(); i++)
    {
        for (int j = jobs[i].deadline; j >= 1; j--)
        {
            if (track[j] == -1)
            {
                track[j] = jobs[i].taskId;
                break;
            }
        }
    }

    unordered_set<int> ans;

    for (int i = 1; i <= 1000; i++)
    {
        if (track[i] != -1)
        {
            ans.insert(track[i]);
        }
    }
    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    return 0;
}