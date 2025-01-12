#include<iostream>
using namespace std;

int main(){
    int n, person, capacity, c = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> capacity >> person;
        if(person - capacity >= 2){
            c++;
        }
    }

    cout << c << endl;

    return 0;
}
