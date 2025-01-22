#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int p[n], q[n];
    for(int i = 0; i < n; i++){
        cin >> p[i] >> q[i];
    }

    for(int i = 0; i < n; i++){
        p[n].push_back(q[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){}
            if(p[j] > p[j+1]){
                swap(p[j], p[j+1]);
            }
    }



    return 0;
}
