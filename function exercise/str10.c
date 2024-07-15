 #include <stdio.h>
void main() {
    char a[1000];
    char n;
    gets(a);
    scanf("%c", &n);

    if (n >= 'A' && n <= 'Z') {
        n = n + 32;
    }
    int count = 0;
    for (int i=0;a[i] != '\0';i++) {
        char x = a[i];
        if (x >= 'A' && x <= 'Z') {
            x = x + 32;
        }

        if (x == n) {
            count++;
        }
    }

    printf("%d\n",count);
}
