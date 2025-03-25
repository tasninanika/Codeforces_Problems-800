#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int m, c, mishika = 0, chris = 0;
        cin >> m >> c;

        if(m > c){
            mishika++;
        }
        else if(m < c){
            chris++;
        }
    }

    return 0;
}
