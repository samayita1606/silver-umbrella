bool MyComp(pair<int, int> p1, pair<int, int> p2) {
    return ((double)p1.second/p1.first > (double)p2.second/p2.first);
}

float fractionalKnapsack(vector<pair<int, int>> v, int cap) {
    sort(v.begin(), v.end(), MyComp);
    
    for(int i=0;i<v.size();i++)
    
    float res = 0;
    
    for(int i=0;i<v.size();i++){
        if(cap>=v[i].first) {
            res+=(float)v[i].second;
            cap-=v[i].first;
        } else {
            res+=(float)(v[i].second)*cap/(v[i].first);
            return res;
        }
    }
    
    return res;
}
