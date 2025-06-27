#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;

        vector<int> s(n);

        for(int i = 0; i < n; i++){
            cin >> s[i];
        }

        sort(s.rbegin(), s.rend());

        int tms = 0, mbrs = 0, min_s = INT_MAX;

        for(int sk : s){
            mbrs++;
            min_s = min(min_s, sk);

            if (mbrs * min_s >= x) {
                tms++;
                mbrs = 0;
                min_s = INT_MAX;
            }
        }

        cout << tms << endl;
    }

    return 0;
}
