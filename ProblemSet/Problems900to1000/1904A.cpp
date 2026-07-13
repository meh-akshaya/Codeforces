#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long a,b;
        cin >> a >> b;
        long long xk , yk;
        cin >> xk >> yk;
        long long xq,yq;
        cin >> xq>>yq;
        set<pair<long long, long long>> Vs;
        set<pair<long long, long long>> Vr;
        //king
        Vs.insert({xk+a,yk+b});
        Vs.insert({xk+a,yk-b});
        Vs.insert({xk-a,yk+b});
        Vs.insert({xk-a,yk-b});
        Vs.insert({xk+b,yk+a});
        Vs.insert({xk+b,yk-a});
        Vs.insert({xk-b,yk+a});
        Vs.insert({xk-b,yk-a});
        //queen  
        Vr.insert({xq+a,yq+b});
        Vr.insert({xq+a,yq-b});
        Vr.insert({xq-a,yq+b});
        Vr.insert({xq-a,yq-b});
        Vr.insert({xq+b,yq+a});
        Vr.insert({xq+b,yq-a});
        Vr.insert({xq-b,yq+a});
        Vr.insert({xq-b,yq-a});
        long long count1 = 0;
        for(auto x: Vs){
            if(Vr.count(x)==1){
                count1++;
            }
        }
        // for (int i=0; i<Vs.size(); i++){
        //     for (int j=0; j<Vr.size(); j++){
        //         if(Vz.count()[i]==Vr[j]){
        //             count++;
        //             break;
        //         }
        //     }
        // }    
        cout << count1 << endl;
    }
}