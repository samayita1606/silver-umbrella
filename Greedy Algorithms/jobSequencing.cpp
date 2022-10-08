bool MyCmp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second>p2.second) return true;
    else if(p1.second==p2.second) return p1.first<p2.first;
    return false;
}

int jobSequencing(vector<pair<int, int>> v) {
    
    sort(v.begin(), v.end(), MyCmp);
    
    int job_size=0;
    for(int i=0;i<v.size();i++) job_size = max(job_size, v[i].first);
    
    vector<int> jobs_schedule(job_size, 0);
    
    int max_profit=0;
    
    for(int i=0;i<v.size();i++) {
        for(int j=v[i].first-1;j>=0;j--) {
            if(jobs_schedule[j]==0) {
                jobs_schedule[j]=1;
                max_profit+=v[i].second;
                break;
            }
        }
    }
    
    return max_profit;
}
