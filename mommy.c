#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10];
    while (scanf("%100s", s) == 1 && strcmp(s, "exit"))
        if (strcmp(s, "mommy") == 0) puts ("good boy");
}
