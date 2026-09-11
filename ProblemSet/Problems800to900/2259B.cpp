#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // vector <long long> V(n);
        vector<long long> Vo;
        vector<long long> Ve;
        for(long long i =0;i<n; i++){
            long long p;
            cin >> p;
            if(p%2==0){
                Ve.push_back(p);
            }else{
                Vo.push_back(p);
            }
        }
        if(Vo.size()>=Ve.size()){
            cout << Vo.size() << endl;
        }else{
            long long count = 1;
            sort(Ve.begin(),Ve.end());
            for(long long i=1; i<Ve.size(); i++){
                if((Ve[i]-Ve[0])%4==0){
                    count++;
                }
            }
            long long r = Ve.size()-count;
            long long z = max({(long long)Vo.size(), count, r});
            cout << z << endl;



        }
        


    }
}