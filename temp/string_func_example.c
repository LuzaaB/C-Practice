#include <stdio.h>

char *fill_name(char *name);

int main()
{
    char myname[20];
    myname[0] = 'H';
    myname[1] = 'I';

    printf("Nomen est %s\n", fill_name(myname));
    char *ret = fill_name(myname);
    //*ret = 'A';

    printf("ABC %s\n", ret);

    printf("Nomen est %s\n", myname);
    return 0;
}

char * fill_name(char *name) {
    const char *data = "Luzaa Byanjankar";
    char otherdata[] = "ABC random string";
    char *copy = data;
    //const char *data = {'L', 'u' ,'z', 'z', 'a', 0};
    for ( ; *copy; copy++) {
        *name++ = *copy;
    }

    *name = NULL;
    return data;
}