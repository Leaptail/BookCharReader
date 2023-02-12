#include <stdio.h>
// lets start with smth that reads all the letter e's
int main()
{
    int totalletters=0;
    int totale=0;
    double percentage;
    char es = '0';
    FILE*in=fopen("Booksample.txt","r");
    es=getc(in);
    while(es != EOF)
    {
        totalletters++;
        if(es == 'e') //this is somehow counting all characters, no clue how it works.
        {
            totale++;
        }
        es=getc(in);
    }
    percentage = 100*((double)totale / totalletters);
    printf("Total number of Es is %d. Total Chars: %d. Percent: %3.2f.",totale,totalletters,percentage);
    fclose(in);
}