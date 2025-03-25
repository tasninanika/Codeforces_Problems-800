#include<iostream>
using namespace std;

int main(){
    int n, mishika = 0, chris = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int m, c;
        cin >> m >> c;

        if(m > c){
            mishka++;
        }
        else if(m < c){
            chris++;
        }
    }

    if(mishika > chris){
        cout << "Mishika" << endl;
    }
    else if(mishika < chris){
        cout << "Chris" << endl;
    }
    else{
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}
