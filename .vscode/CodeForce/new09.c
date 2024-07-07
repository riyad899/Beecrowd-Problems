#include <stdio.h>

int main() {
    char ch;
    char str[30];
    char sentence[30];

    scanf("%c", &ch);
    scanf("%*c");

    scanf("%[^\n]%*c", str);

    scanf("%[^\n]%*c", sentence);

    printf("%c\n", ch);

    printf("%s\n", str);

    printf("%s\n", sentence);

    return 0;
}
