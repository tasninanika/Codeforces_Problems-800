#include<iostream>
using namespace std;

int main(){
    int n, mishka = 0, chris = 0;
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

    if(mishka > chris){
        cout << "Mishka" << endl;
    }
    else if(mishka < chris){
        cout << "Chris" << endl;
    }
    else{
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}
