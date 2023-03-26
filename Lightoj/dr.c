#include <stdio.h>
#include <string.h>

int main() {
    int t, n, c;
    char s1[10], s2[10];
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        c = 0;
        scanf("%d", &n);
        for(int j = 0; j < n; j++) {
            scanf("%s %s", s1, s2);
            if(strcmp(s1, "water") == 0 || strcmp(s1, "soda") == 0)
                c++;
        }
        if(c == n) {
            printf("Case %d: Yes\n", i);
        } else {
            printf("Case %d: No\n", i);
        }
    }
    return 0;
}
