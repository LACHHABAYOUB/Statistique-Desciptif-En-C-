/*        A y o u b l a c h h a b*/

#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>
#include<conio.h>


 
   
   int  menu_p()
{
	printf("               *********************************************\n");
	printf("               **         Statistique Desciptif           **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Tableau sans effectif                **\n");
    printf("               ** 2. Tableau avec effectif                **\n");
    printf("               ** 3. Tableau avec effectif et intervalle  **\n");
    printf("               ** 0. Quitter                              **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
	printf("\n");
	printf("               Choiser Une Option SVP :   ");	
	
}
void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}
   char * Accent(const char * mess) {
      static char retour [80];
      CharToOem (mess,retour); // API Windows
      return retour;
   }
   
int main()
{
	 int N,x,y,choix,i;
     float AY,SommeAY,AA,AX,SommeAS ,SommeAZ,SOMME, SOMMEAUCARRE, M,COV,Lach,ayoub,LACHHABAYOUB,V,ACOV,BCOV, Ec,A1,AZ,AS,ABI;
	
printf("\n\n");
printf("%s",Accent("   Bienvenu sur le cours de Graphes et Algorithmes avec la programmation c    \n"));
printf("\n");	
printf("%s",Accent("  SVP Choisi Votre Couleur de l'ecriture Prefere et la couleur de fond Prefere:    \n"));
printf("\n");
printf("                                  0 : Noir\n");
printf("%s",Accent("                                  1 : Bleu fonce\n"));
printf("%s",Accent("                                  2 : Vert fonce\n"));
printf("                                  3 : Turquoise\n");
printf("                                  4 : Rouge fonce\n");
printf("                                  5 : Violet\n");
printf("                                  6 : Vert caca d'oie\n");
printf("                                  7 : Gris clair\n");
printf("%s",Accent("                                  8 : Gris fonce\n"));
printf("                                  9 : Bleu fluo\n");
printf("                                  10 : Vert fluo\n");
printf("                                  11 : Turquoise\n");
printf("                                  12 : Rouge fluo\n");
printf("                                  13 : Violet 2\n");
printf("                                  14 : Jaune\n");
printf("                                  15 : blanc \n");
printf("\n");

printf("%s",Accent("Votre choix de colleur de l'ecriture Prefere:    \n"));
scanf("%d",&x);	
printf("%s",Accent("Votre choix de colleur du fond Prefere:    \n"));
scanf("%d",&y);	
	Color(x,y);
	system("cls");
			


           menu_p();
           
	scanf("%d",&choix);
	
	
		switch(choix)
		{
			
			case 1:
			 system("cls");
		
     

     printf ("\tBienvenue dans mon programme de calcul de la moyenne, variance et\necart type a partir d'une serie de valeurs.\n");
     printf ("\t \nEntrez le nombre de valeurs N de votre serie : ");
     scanf ("%d", &N);
	 Lach=(N+1)/2;
     SOMME = 0;
     SOMMEAUCARRE = 0;
     LACHHABAYOUB=0;	
     for (i=1;i<=N;i++)
     {
         printf ("\nEntrez vos valeurs %d : ",i);
         scanf ("%f", &AY);
         SOMME = SOMME+AY;
         SOMMEAUCARRE = SOMMEAUCARRE+AY*AY;
         LACHHABAYOUB=LACHHABAYOUB+AY*i;
     }
    
	M = SOMME/N;
   	V = SOMMEAUCARRE/N-(M*M);
     Ec = sqrt (V);
     COV=(LACHHABAYOUB/N)-Lach*M;
	ACOV=COV/V;
	BCOV=SOMME-ACOV*Lach;
     printf ("\nLa moyenne de la serie vaut : %f\n", M);
     printf ("\nLa variance de la serie vaut : %lf\n", V);
     printf ("\nL'ecart type de la serie vaut : %lf\n", Ec);
	 printf ("\nLa Covariance de la serie vaut : %lf\n", COV);
	 printf ("\nL'equation de tendance donne Par '%lf T + %lf \n", ACOV,BCOV);
     printf ("\nLACHHAB Ayoub ");
     return 0;
	        break;
	        
	        case 2:
	        	system("cls");
	    	
     

     printf ("\tBienvenue dans mon programme de calcul de la moyenne, variance et\necart type a partir d'une serie de valeurs.\n");
     printf ("\t \nEntrez le nombre de valeurs N de votre serie : ");
     scanf ("%d", &N);
	 Lach=(N+1)/2;
     SOMME = 0;
     SOMMEAUCARRE = 0;
     LACHHABAYOUB=0;	
     ABI=0;
     SommeAZ=0;
     SommeAS=0;
     SommeAY=0;
     for (i=1;i<=N;i++)
     {
         printf ("\nEntrez vos Effectif %d : ",i);
         scanf ("%f", &AZ);
         SommeAZ=SommeAZ+AZ;
         printf ("\nEntrez vos valeurs %d : ",i);
         scanf ("%f", &AS);
         SommeAS=SommeAS+AS;
         AY=AZ*AS;
         SommeAY=SommeAY+AY;
         ABI=ABI+AS;
         SOMME =SOMME+AY;
         SOMMEAUCARRE = SOMMEAUCARRE+(AZ*AZ)*AS;
         LACHHABAYOUB=LACHHABAYOUB+AY*i;
         
     }
    

	M = SOMME/ABI;
   	V = SOMMEAUCARRE/ABI-(M*M);
     Ec = sqrt (V);
     COV=(SommeAY/N)-(SommeAZ/N)*(SommeAS/N);
	ACOV=COV/V;
	BCOV=SOMME-ACOV*Lach;
     printf ("\nLa moyenne de la serie vaut : %f\n", M);
     printf ("\nLa variance de la serie vaut : %lf\n", V);
     printf ("\nL'ecart type de la serie vaut : %lf\n", Ec);
	 printf ("\nLa Covariance de la serie vaut : %lf\n", COV);
	 printf ("\nL'equation de tendance donne Par '%lf T + %lf \n", ACOV,BCOV);
     printf ("\nLACHHAB Ayoub ");
    	return 0;
	        break;
	        
	        case 3:
			 system("cls");
			 
     

     printf ("\tBienvenue dans mon programme de calcul de la moyenne, variance et\necart type a partir d'une serie de valeurs.\n");
     printf ("\t \nEntrez le nombre de valeurs N de votre serie : ");
     scanf ("%d", &N);
	 Lach=(N+1)/2;
     SOMME = 0;
     SOMMEAUCARRE = 0;
     LACHHABAYOUB=0;	
     ABI=0;
     for (i=1;i<=N;i++)
     {
     	 printf ("\nEntrez vos 1 intervalle %d : ",i);
         scanf ("%f", &AA);
         printf ("\nEntrez vos 2 intervalle %d : ",i);
         scanf ("%f", &AX);
         printf ("\nEntrez vos Effectif %d : ",i);
         scanf ("%f", &AS);
         SommeAS=SommeAS+AS;
         AZ=((AA+AX)/2);
         SommeAZ=SommeAZ+AZ;
         
         AY=AZ*AS;
         SommeAY=SommeAY+AY;
         ABI=ABI+AS;
         SOMME =SOMME+AY;
         SOMMEAUCARRE = SOMMEAUCARRE+(AZ*AZ)*AS;
         LACHHABAYOUB=LACHHABAYOUB+AY*i;
         
     }
    
	M = SOMME/ABI;
   	V = SOMMEAUCARRE/ABI-(M*M);
     Ec = sqrt (V);
     COV=(SommeAY/N)-(SommeAZ/N)*(SommeAS/N);
	ACOV=COV/V;
	BCOV=SOMME-ACOV*Lach;
     printf ("\nLa moyenne de la serie vaut : %f\n", M);
     printf ("\nLa variance de la serie vaut : %lf\n", V);
     printf ("\nL'ecart type de la serie vaut : %lf\n", Ec);
	 printf ("\nLa Covariance de la serie vaut : %lf\n", COV);
	 printf ("\nL'equation de tendance donne Par '%lf T + %lf \n", ACOV,BCOV);
     printf ("\nLACHHAB Ayoub ");

			return 0;
	        break;
	        
	        
	        
		}
		return 0;
} 
