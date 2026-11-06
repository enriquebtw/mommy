#include <stdio.h>
#include <string.h>

int main(void) {
    char s[101];
    while (printf("> "), fflush(stdout), scanf("%100s", s) == 1 && strcmp(s, "exit"))
        if (strcmp(s, "mommy") == 0) puts ("good boy");
        else printf("horny ahh %s gibts nicht\n", s);
}
