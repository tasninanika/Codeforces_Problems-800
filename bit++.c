#include<stdio.h>
#include<string.h>

int main(){
    int n, x=0;
    scanf("%d",&n);
    char s[4];
    for(int i = 0; i < n; i++){
        scanf("%s", s);
        if(strcmp(s, "X++") == 0 || strcmp(s, "++X") == 0){
            x++;
        }
        else if (strcmp(s, "X--") == 0 || strcmp(s, "--X") == 0){
            x--;
        }
    }
    printf("%d\n",x);
    return 0;
}
