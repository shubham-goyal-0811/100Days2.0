class SeatManager {
public:
    set<int>s;
    SeatManager(int n) {
        for(int i=1;i<=n;i++)
            s.insert(i);
    }
    
    int reserve() {
        int f = *begin(s);
        s.erase(begin(s));
        return f;
    }
    
    void unreserve(int seatNumber) {
        s.insert(seatNumber);
    }
};
