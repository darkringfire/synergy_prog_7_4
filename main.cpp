#include <iostream>
#include <cstring>
#include <conio.h>

#define L 100

void replace_1st_last(char a[], char s, char b[]) {
    strcpy(b, a);
    b[0] = s;
    b[strlen(b)-1] = s;
}

void strip(char a[], char b[]) {
    int l = strlen(a);
    int n1 = 0, n2 = l;
    while (a[n1] == ' ') {
        n1++;
    }
    while (a[n2-1] == ' ') {
        n2--;
    }
    for (int i = 0; i+n1 < n2; i++) {
        b[i] = a[i+n1];
    }
    b[n2-n1] = '\0';
}

int main() {
    char s[L];

    printf("\nTask 1. Replace 1st and last symbol\n");
    char c;
    printf("Enter string:");
    scanf("%s", s);
    printf("Enter char:");
    c = getch();
    printf("%c\n", c);
    char s1[L];
    replace_1st_last(s, c, s1);
    printf("Result string: %s\n", s1);

    printf("\nTask 2. Strip spaces\n");
    printf("Enter string:");
    scanf("%s", s);
    char s2[L];
    strip(s, s2);
    printf("Result string: '%s'\n", s2);

    return 0;
}
