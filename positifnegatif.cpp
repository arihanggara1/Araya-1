#include<stdio.h>
#include<conio.h>

int main()
{
    int bil;
    printf("----------------------------\n");
    printf("Bilangan Positif dan Negatif\n");
    printf("----------------------------\n");
    printf("\nMasukan bilangan bulat : ");
    scanf("%d",&bil);
 
    if(bil>0)
        printf("\n\n%d termasuk Bilangan positif",bil);
    else if(bil<0)
        printf("\n\n%d termasuk Bilangan negatif",bil);
    else 
        printf("\n\n%d adalah Bilangan nol",bil);
    
getch();
        
}