#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> numbers(n);

        for(int i = 0; i < n; ++i){
            cin >> numbers[i];
        }

        int maximum = *max_element(numbers.begin(), numbers.end());
        int minimum = *min_element(numbers.begin(), numbers.end());

        int d = maximum - minimum;

        cout << d << endl;
    }
}
