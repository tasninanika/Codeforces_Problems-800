#include<stdio.h>

int main(){
    int arr[5][5],r,c,step;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d",&(arr[i][j]));
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(arr[i][j] == 1){
                arr[i][j] = 0;
                r = i;
                c = j;
            }
        }
    }
    arr[2][2] = 1;
    step = abs(2-r) + abs(2-c);
    printf("%d",step);


    return 0;
}
