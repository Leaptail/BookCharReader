#include <stdio.h>
// lets start with smth that reads all the letter e's
int main()
{
    int totalletters=0;
    int totale=0;
    double percentage;
    int Alphabetter[26];
    for(int h=0; h<26; h++) //checks a-z
    {
        char ltrhold = 'a' + h;
        Letterreader(ltrhold, &Alphabetter[h]);
        totalletters = totalletters+Alphabetter[h];
    }
//~~~~~~~~~~~~~~~~~~~~~~~~~
//    char es = '0';
//    FILE*in=fopen("Booksample.txt","r");
//    es=getc(in);
//    while(es != EOF)
//    {
//        totalletters++;
//        if(es == 'e') //this is somehow counting all characters, no clue how it works.
//        {
//            totale++;
//        }
//        es=getc(in);
//    }
//~~~~~~~~~~~~~~~~~~~~~~~~~~

//move these into the for loop
        percentage = 100*((double)totale / totalletters);
    printf("Total number of Es is %d. Total Chars: %d. Percent: %3.2f.",totale,totalletters,percentage);
    fclose(in);
}


int Letterreader(char testlttr, int *lttrno)
{
	char placeholder = '0';
	placeholder = getc(in);
	while(placeholder != EOF)
	{
		if(placeholder == testlttr) //need to find way to check for upperlower case
		{
		     *lttrno++;
		}
		placeholder = getc(in);
	}
}
