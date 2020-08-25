#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char input[100];
    char newflag[100];
    char flag[] = "ui4`gm5h";
    for(i=0; i<sizeof(flag)-1; i++){
        newflag[i] = flag[i] - 1;
    }
    printf ("Check Flag : ");
    scanf ("%s",input);
    if(strcmp(newflag, input)!= 0){
       puts("False, try harder");
    }
    else {
        puts("True, gg");
    }
    return 0;
}
