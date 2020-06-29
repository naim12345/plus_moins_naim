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
        int a=0,x=0;
        int diff;
        srand(time(0));
        int valeur_a_trouver=randoms(lower,upper,count);
        printf("Veuillez choisir votre mode de difficulte : \n");
        printf("1-facile\n");
        printf("2-normale\n");
        printf("3-difficile\n");
        scanf("%d",&diff);
        while((diff>3)||(diff<1))
        {   switch(diff)
            { case 1:printf("Vous etes en mode facile");
                     break;
                     
              case 2:printf("Vous etes en mode normale");
                     break;
                    
              case 3:printf("Vous etes en mode difficile");
                     break;
                    
              default:printf("Veuillez choisir un chiffre valide.\n"); 
                      printf("Veuillez choisir votre mode de difficulte : \n");
                      scanf("%d",&diff);
                      
            } 
        }             
       
       if (diff==2)
        {
          for(int i=1;i<=25;i++)
          {
            printf("Veuillez entrer un chiffre entier : \n");
            scanf("%d",&choix_joueur);
            plus_moins(choix_joueur,valeur_a_trouver);
            if (choix_joueur == valeur_a_trouver)
             {
               break;
             }
            a++;
          }
            
        }
       else
        {
          if (diff==3)
          {
            for(int i=1;i<=10;i++)
            {
               printf("Veuillez entrer un chiffre entier : \n");
               scanf("%d",&choix_joueur);
               plus_moins(choix_joueur,valeur_a_trouver);
                if (choix_joueur == valeur_a_trouver)
                 {
                    break;
                 }
               a++;
            }
           
            
          }
          else
          {
            while (choix_joueur != valeur_a_trouver)
            {
               printf("Veuillez entrer un chiffre entier : \n");
               scanf("%d",&choix_joueur);
               plus_moins(choix_joueur,valeur_a_trouver);
               a++;
            }
           
          }
        }
        printf("Nombre de tentatives : %d\n",a);
}
