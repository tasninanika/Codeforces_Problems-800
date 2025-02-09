#include<iostream>
using namespace std;

int main(){
    int n, k, c = 0;
    cin >> n >> k;

    int total_time = 240 - k;
    int each_problem_time = 0;

    for(int i = 1; i <= n; i++){
       each_problem_time += i * 5;

       if(each_problem_time <= total_time){
            c++;
       }
    }

    cout << c << endl;

    return 0;
}
