#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, j, len;
    char n[100];
    scanf("%s", &n);
    len = strlen(n);
    if (len>10)  
    {
        printf("out of range\n");
        exit(0);
}
for (i = 0; i <= len; i++){
    switch (n[i]) {
case '0':
break;
case '1':  
printf("��");
break;
case '2':
printf("�L");
break;
case '3':
printf("��");
break;
case '4':
printf("�v");
break;
case '5':
printf("��");
break;
case '6':
printf("��");
break;
case '7':
printf("�m");
break;
case '8':
printf("��");
break;
case '9':
printf("�h");

break;
}
}
 
    return 0;
}
