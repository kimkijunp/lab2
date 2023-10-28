#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void foo(int num) {
    assert(num >= 0 && num <= 100);
    printf("foo : num = %d\n", num);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s aNumber\n(0 <= aNumber <= 100)\n", argv[0]);
        return 1;
     }

    int num = atoi(argv[1]);
    foo(num);

    return 0;
}
