#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <ctype.h>
#pragma warning(disable:6013)
//int main()
//{
//    char arr[10];
//    char* p = arr;
//    do
//    {
//        scanf("%c", p);
//    } while (*p++ != '!');
//    p = arr;
//    while (*p != '!')
//    {
//        if (*p >= 'a' && *p <= 'z')
//        {
//            *p = toupper(*p);
//        }
//        p++;
//    }
//    FILE* pf = fopen("test.txt", "w");
//    if (pf == NULL)
//    {
//        printf("%s\n", strerror(errno));
//        return 0;
//    }
//    fwrite(arr, sizeof(arr), 1, pf);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}
int main()
{
    char arr[10];
    FILE* pa = fopen("a.txt", "w");
    if (pa == NULL)
    {
        printf("%s\n", strerror(errno));
        return 0;
    }
    scanf("%s", arr);
    fwrite(arr, sizeof(arr), 1, pa);
    FILE* pb = fopen("b.txt", "w");
    if (pb == NULL)
    {
        printf("%s\n", strerror(errno));
        return 0;
    }
    scanf("%s", arr);
    fwrite(arr, sizeof(arr), 1, pb);
    FILE* pc = fopen("c.txt", "w");
    //fputs(pa,pc);
    fwrite(pa, sizeof(arr), 1, pc);
    fclose(pc);
    pc = NULL;
    pc = fopen("c.txt", "a");
    //fputs(pb,pc);
    fwrite(pb, sizeof(arr), 1, pc);
    fclose(pa);
    pa = NULL;
    fclose(pb);
    pb = NULL;
    fclose(pc);
    pc = NULL;
    return 0;
}