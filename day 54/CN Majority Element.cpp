int majorityElement(vector<int> v) {
	// Write your code here
	map<int,int> mpp;
	for(auto x: v){
		mpp[x]++;
	}
	for(auto x : mpp){
		if(x.second>(v.size()/2)){
			return x.first;
		}
	}
}
