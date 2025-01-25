#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int sum = 0;

    string s[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    for(int i = 0; i < n; i++){
        if(s[i] == "Tetrahedron"){
            sum += 4;
        }
        else if(s[i] == "Cube"){
            sum += 6;
        }
        else if(s[i] == "Octahedron"){
            sum += 8;
        }
        else if(s[i] == "Dodecahedron"){
            sum += 12;
        }
        else if(s[i] == "Icosahedron"){
            sum += 20;
        }
    }

    cout << sum << endl;


    return 0;
}
