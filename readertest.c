#include <stdio.h>
int main()
{
    int number;
    //FILE*in=fopen("F:\\Programming\\github C\\BookCharReader\\test.txt","r");
    FILE*in=fopen("test.txt","w");
    fprintf(in,"2000");
    fclose(in);
}
//works!