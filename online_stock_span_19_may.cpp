class StockSpanner {
public:
    stack<int> s;
    vector<int> v;
    int ctr;
    StockSpanner() {
        while(!s.empty()) s.pop();
        v.clear();
        ctr=0;
    }
    
    int next(int price) {
        ctr++;
        v.push_back(price);
        while(!s.empty() && v[s.top()-1] <= price) s.pop();
        int ret=s.empty()?ctr:ctr-s.top();
        s.push(ctr);
        return ret;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */