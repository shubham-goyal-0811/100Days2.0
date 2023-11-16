class Solution
{
public:
void dorru(string &curr,string &ans,unordered_map<string,int> &mahesh,int k){
    string temp;
    for(int i = k-1;i>=0;i--){
        temp = curr.substr(1);
        temp+=char(i+48);
        if(mahesh.find(temp) == mahesh.end()){
            mahesh[temp] = 1;
            ans+=char(i+48);
            dorru(temp,ans,mahesh,k);
            return;
        }
    }
}
    string findString(int n, int k) {
        // code here
        string hihi = "";
        string lolo = "";
        unordered_map<string,int> mahesh;
        for(int i = 0;i<n;i++){
            hihi+='0';
        }
        lolo = hihi;
        mahesh[lolo] = 1;
        dorru(lolo,hihi,mahesh,k);
        return hihi;
    }
};