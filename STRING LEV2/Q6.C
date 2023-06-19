#include <stdio.h>
#include <regex.h>

int validateEmail(const char *email) {
    regex_t regex;
    int reti;
    char *pattern = "^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$";

    reti = regcomp(&regex, pattern, REG_EXTENDED);
    if (reti) {
        fprintf(stderr, "Could not compile regex\n");
        return -1;
    }

    reti = regexec(&regex, email, 0, NULL, 0);
    if (!reti) {
        printf("Valid email: %s\n", email);
    } else if (reti == REG_NOMATCH) {
        printf("Invalid email: %s\n", email);
    } else {
        char error[100];
        regerror(reti, &regex, error, sizeof(error));
        fprintf(stderr, "Regex match failed: %s\n", error);
        return -1;
    }

    regfree(&regex);

    return 0;
}

int main() {
    const char *email1 = "hello@example.com";
    const char *email2 = "hello@example.org";
    const char *email3 = "\"mail2friend\"@hi5.com";
    const char *email4 = "\"mail2admin\"@Prog.org";
    const char *email5 = "guest.user@example.com";

    validateEmail(email1);
    validateEmail(email2);
    validateEmail(email3);
    validateEmail(email4);
    validateEmail(email5);

    return 0;
}
