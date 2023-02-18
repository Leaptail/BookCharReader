#include <stdio.h>


int Letterreader(char testlttr)
{
    int lttrno=0;
	char placeholder = '0';
    FILE*in=fopen("F:\\Programming\\github C\\BookCharReader\\Booksample.txt","r");
	placeholder = getc(in);
	while(placeholder != EOF)
	{
		if(placeholder == testlttr || placeholder == testlttr - 32) // found way to check for upperlower case --
		{
		     lttrno++;
		}
		placeholder = getc(in);
	}
    fclose(in);
    return lttrno;
}

// lets start with smth that reads all the letter e's
int main()
{
    int totalletters=0;
    int totale=0;
    double percentage;
    int Alphabetter[26];
    for(int h=0; h<26; h++) //checks a-z
    {
        char ltrhold = 'a'+ h;
        Alphabetter[h] = Letterreader(ltrhold);
        totalletters = totalletters+Alphabetter[h];
    }
        //printing the values for every letter and frequency
    printf("Lttr / Total / Freq\n");
        
    for(int j=0;j<26;j++)
    {
    	totale=Alphabetter[j];
    	percentage = 100*((double)totale/totalletters);
    	printf("%c     %4d     %3.2f\n",j + 'a',totale,percentage);
     }
     printf("Total letters: %d\n", totalletters);
}



