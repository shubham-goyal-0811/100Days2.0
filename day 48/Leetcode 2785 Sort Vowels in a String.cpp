class Solution {
public:
    bool check(char c){
        string vow="AEIOUaeiou";
        for(auto x:vow){
            if(c==x)
                return 1;
        }
        return 0;
    }
    string sortVowels(string s){
        //Sirf vowels sort krne hai consonants se koi matlab nhi
        string vow="";
        for(int i=0;i<s.size();i++){
            if(check(s[i])){
                vow.push_back(s[i]);
            }
        }
        sort(vow.begin(),vow.end());

        int id=0;
        for(int i=0;i<s.size();i++){
            if(check(s[i])){
                s[i]=vow[id];
                id++;
            }
        }
        return s;
    }
};
