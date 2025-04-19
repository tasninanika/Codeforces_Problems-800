#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int result = 0, c = 0;
    for(int i = 0; ; i++){
        int cubes = i * (i + 1) / 2;
        if(c += cubes > n){
            break;
        }
        c++;
        result++;
    }

    cout << result << endl;

    return 0;
}
