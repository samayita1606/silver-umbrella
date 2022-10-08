/**
Given start time and end time of each task,
we need to find the maximum tasks that we can do out of all the tasks,
under the condition that we can do only one task at a time, and we cannot do tasks having overlapping time spans...
*/
#include <bits/stdc++.h>

using namespace std;

int maxTasks(vector<pair<int, int>> v, int n) {
    sort(v.begin(), v.end());
    int res=1, prev_fin_time = v[0].first;
    for(int i=1;i<n;i++) {
        if(v[i].second>=prev_fin_time) {
            res++;
            prev_fin_time = v[i].first;
        }
    }
    
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i=0;i<n;i++) cin >> v[i].second >> v[i].first;
    
    cout << maxTasks(v, n) << endl;

    return 0;
}
