#include<iostream>
using namespace std;


int main(){
    int y, w;
    cin >> y >> w;

    int c = max(y,w);
    c = 6 - c + 1;

    int d = 6;
    if(c == 6){
        c /= 6;
        d /= 6;
    }
    else if(c == 4){
    }

    return 0;
}
