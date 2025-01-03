#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];

    scanf("%s %s", str1, str2);

    for (int i = 0; i < strlen(str1); i++) {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }

    int result = strcmp(str1, str2);

    // Output the result
    if (result < 0) {
        printf("-1\n");
    } else if (result > 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
