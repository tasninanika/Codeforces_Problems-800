#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        set<char> problems_solved;
        int b = 0;

        for(int i = 0; i < n; i++){
            if(problems_solved.find(s[i]) == problems_solved.end()){
                b += 2;
                problems_solved.insert(s[i]);
            }
            else{
                b++;
            }
        }

    }

    return 0;
}
