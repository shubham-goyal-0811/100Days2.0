unordered_map<int,int> elvishbhai;
        for(int i = 0;i<nums.size();i++){
            elvishbhai[nums[i]]++;
        }
        priority_queue<pair<int,int>> maheshbhai;
        for( auto x: elvishbhai){
            maheshbhai.push({x.second,x.first});
        }
        vector<int> vardhmanbhai;
        for(int shubham = 1;shubham <= k;shubham++ ){
            vardhmanbhai.push_back(maheshbhai.top().second);
            maheshbhai.pop();
        }
        return vardhmanbhai;