#include<iostream>
using namespace std;

int main(){
    int n, k, c = 0;
    cin >> n >> k;

    int total_time = 240 - k;

    for(int i = 0; i < n; i++){
       int each_problem_time = i * 5;

       if(each_problem_time <= total_time){
            c++;
       }
    }

    return 0;
}
