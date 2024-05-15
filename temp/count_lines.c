# include <stdio.h>
/* count characters in input: !st version */
main()
{
    long nc;
    const char *stri = "Luzaa Byanjankar";
    nc = 0;
    while (getchar() != EOF)
        nc++;
    printf("\n%ld\n", nc);
}