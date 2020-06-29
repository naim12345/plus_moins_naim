#include<stdio.h>
#include <stdlib.h> 
#include <time.h> 
int plus_moins(int choix, int trouver){

	if (choix==trouver)
        {
          printf("Bingo.Vous avez gagner!\n");
        }
	else
        {
           if (choix>trouver)
           {
             printf("Moins\n");
           }
           else
           {
             printf("Plus\n");
           }
        }

}
int randoms(int lower, int upper, int count)
{
    int i;
    for (i = 0; i < count; i++)
      {
        int num = (rand() % (upper - lower + 1)) + lower;
        return num;
      }
}
int main()
{
        int lower=0, upper=100, count=1;
	int choix_joueur;
        int a=0;
        srand(time(0));
        int valeur_a_trouver=randoms(lower,upper,count);
        while (choix_joueur != valeur_a_trouver)
        {
            printf("Veuillez entrer un chiffre entier : \n");
            scanf("%d",&choix_joueur);
            plus_moins(choix_joueur,valeur_a_trouver);
            a++;
        }
        printf("Nombre de tentatives : %d\n",a);
}
