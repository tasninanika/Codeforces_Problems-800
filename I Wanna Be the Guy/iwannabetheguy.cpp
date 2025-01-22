#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int p;
    cin >> p;

    int arrp[101];
    for(int i = 0; i < p; i++){
        cin >> arrp[i];
    }

    int q;
    cin >> q;

    int arrq[q];
    for(int i = 0; i < q; i++){
        cin >> arrq[i];
    }

    for(int i = 0; i < q; i++){
        arrp[p + i] = arrq[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arrp[j] > arrp[j+1]){
                swap(arrp[j], arrp[j+1]);
            }
        }
    }

    for (int i = 0; i < p+q; i++) {
        cout << arrp[i] << " ";
    }


    return 0;
}
