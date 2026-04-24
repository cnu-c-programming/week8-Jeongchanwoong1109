#include <stdio.h>

int main()
{
    char arr[] = "hello";
    char *p = "hello";

    arr[0] = 'H';
    printf("%s", arr);

    /*p[0] = 'H';
    printf("%s\n", p);*/

    return 0;
}
