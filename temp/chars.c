#include <stdio.h>

int main(int argc, char *argv[])
{
    char let = 'L';
    const char *name = "Luzaa"
        "byanjankar";

    if (let == name[0]) {
        printf("Yes!\n");
    }

    printf("%s \n", name);
    printf("%d \n", let);
    printf("%d \n", let-1);
    printf("%c \n", let-1);


}
