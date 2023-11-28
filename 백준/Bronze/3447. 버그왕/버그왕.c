#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    char bug[] = "BUG";

    while (fgets(str, sizeof(str), stdin) != NULL) {
        // Remove the trailing newline character
        str[strcspn(str, "\n")] = '\0';

        char *found = strstr(str, bug);

        while (found != NULL) {
            memmove(found, found + strlen(bug), strlen(found + strlen(bug)) + 1);
            found = strstr(str, bug);
        }

        printf("%s\n", str);
    }

    return 0;
}
