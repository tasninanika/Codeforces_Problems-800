#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int m, c;
        cin >> m >> c;

        if(m > c){
            mishika++;
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
