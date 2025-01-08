#include<iostream>
using namespace std;

int main(){
    int n, h, f, w = 0;
    cin >> n >> h;

    for(int i = 0; i < n; i++){
        cin >> f;
        if(f > h){
            w += 2;
        }
        else{
            w++;
        }
    }

    cout << w << endl;

    return 0;
}
