#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int programmers[5000], mathematicians[5000], sportsmen[5000];
    int p_count = 0, m_count = 0, s_count = 0;


    for(int i = 0; i < n; i++){
        int t[n];
        cin >> t[i];

        if(t == 1){
            programmers[p_count] = i;
            p_count++;
        }
        else if(t == 2){
            mathematicians[m_count] = i;
            m_count++;
        }
        else{
            sportsmen[s_count] = i;
        }
    }

    return 0;
}
