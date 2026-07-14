#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char,int> um;
        for (int i=0; i<s.size(); i++){
            um[s[i]]++;
        }
        int even = 0;
        int odd = 0;
        int oddchar = 0;
        for (auto x: um){
            if((x.second)%2==0){
                even++;
            }else{
                odd++;
                oddchar = oddchar+x.second;
            }
        }
        if(k+1<odd){
            cout << "No" << endl;
        }else {
            cout << "Yes" << endl;
        }

        

    }
}