#include <unistd.h>
#include <string.h>

void custom_char_output(char *str, int n) {
    int len = strlen(str);

    if (len == 0) {
        write(1, "\n", 1);
        return;
    }

    if (n == 1) {
        write(1, str, len);
        write(1, "\n", 1);
        return;
    }

    if (n < 1 || n > len) {
        write(1, "\n", 1);
        return;
    }

    int i = n - 1;
    const int step = n;

    while (i < len) {
        write(1, &str[i], 1);
        if (i + step < len) {
            write(1, " ", 1);
        }
        i += step;
    }

    write(1, "\n", 1);
}

int main() {
    custom_char_output("HelloWorld", 1);   // Output: HelloWorld\n
    custom_char_output("HelloWorld", 2);   // Output: e l W r d\n
    custom_char_output("HelloWorld", 3);   // Output: l W l\n
    custom_char_output("HelloWorld", 4);   // Output: l r\n
    custom_char_output("HelloWorld", 5);   // Output: o d\n
    custom_char_output("HelloWorld", 6);   // Output: W\n
    custom_char_output("HelloWorld", 11);  // Output: \n (since n > length)
    custom_char_output("", 1);              // Output: \n (empty string)

    return 0;
}
