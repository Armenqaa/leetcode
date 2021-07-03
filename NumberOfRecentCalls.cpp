class RecentCounter {
private:
    int counter;
    list<int> l;
public:
    RecentCounter() {
        counter = 0;
    }
    
    int ping(int t) {
        counter = 0;
        l.push_back(t);
        
        while (l.front() < t - 3000) {
            l.pop_front();
        }
        
        return l.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
