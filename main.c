#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  Auteur : Philippe BORRIBO
    Version : 1.0
    Github : https://github.com/Philippe-Borribo
    LinkedIn : https://linkedin.com/in/philippe-borribo
    Bienvenu(e) dans notre programme de conjugaison des verbes du 2ième groupe */

void main()
{
    int continuer=1;
    while(continuer){
    char verbe[20];
    //liste non exhaustive des verbes du 3e groupe se terminant par ir
    char *liste[]={"abstenir","accourir","accueillir","acquerir","advenir","apercevoir","appartenir","assaillir",
                "assentir","asseoir","avoir","bouillir","cueillir","circonvenir","codetenir","concevoir",
                "concourir","conquerir","consentir","contenir","contrevenir","convenir","courir","couvrir",
                "cueillir","debouillir","decevoir","decouvrir","defaillir","dementir","departir","depourvoir",
                "desassortir","desservir","detenir","devenir","devetir","devoir","disconvenir","discourir","dormir",
                "emouvoir","encourir","endormir","enfuir","enquerir","entrapercevoir","entrecueillir","entretenir",
                "entrevoir","entrouvrir","equivaloir","faillir","falloir","fuir","gesir","impartir","intervenir",
                "maintenir","mentir","mourir","mouvoir","obtenir","obvenir","offrir","ouvrir","parcourir","partir",
                "parvenir","percevoir","pleuvoir","pourvoir","pouvoir","pressentir","prevaloir","prevenir","prevoir",
                "promouvoir","provenir","rasseoir","recevoir","reconquerir","recourir","recouvrir","recueillir",
                "redecouvrir","redevenir","redevoir","rendormir","rentrouvrir","repartir","reparcourir","repleuvoir",
                "repourvoir","requerir","ressentir","resservir","ressortir","retenir","revaloir","revenir","revêtir",
                "revoir","revouloir","rouvrir","saillir","savoir","secourir","sentir","servir","sortir","souffrir",
                "soutenir","subvenir","survenir","tenir","tressaillir","valoir","venir","vetir","voir","vouloir",};
    char *conj; // permettra de recuperer le prefixe
    char* terminaison_present[6]={"is","is","it","issons","issez","issent"};
    char* terminaison_imparfait[6]={"issais","issais","issait","issions","issiez","issaient"};
    char* terminaison_futur[6]={"irai","iras","ira","irons","irez","iront"};
    char* terminaison_passe[6]={"is","is","it","imes","ites","irent"};
    char* pronom[6]={"Je","Tu","Il/Elle","Nous","Vous","Ils/Elles"};
    int i=0,taille=sizeof(liste)/8; // nombre d'elements du tableau

        do{

            printf("Entrer un verbe du deuxieme groupe:\n");
            scanf("%s",verbe);

            //Conversion en minuscule
            for(i=0;i<strlen(verbe);i++){
                if(verbe[i]>= 'A' && verbe[i] <= 'Z')
                verbe[i] = verbe[i] - 'A' + 'a' ;
            }

            conj=verbe+strlen(verbe)-2; // renvoi le deux derniers termes du verbe

             for(i=0;i<taille;i++){     // verifie si "verbe" se trouve dans la liste
                if(strcmp(liste[i],verbe)==0){
                    conj="er";
                    break;
                }
            }
        }while(strcmp(conj,"ir")); // Verifie si "verbe" se termine par ir

        printf("\n Present: \n");
        for(i=0;i<6;i++){
            strcpy(conj,terminaison_present[i]);
            printf("%s %s\n",pronom[i],verbe);
        }
        printf("\n\n Imparfait: \n");
        for(i=0;i<6;i++){
            strcpy(conj,terminaison_imparfait[i]);
            printf("%s %s\n",pronom[i],verbe);
        }
        printf("\n\n Futur simple: \n");
        for(i=0;i<6;i++){
            strcpy(conj,terminaison_futur[i]);
            printf("%s %s\n",pronom[i],verbe);
        }
        printf("\n\n Passe simple: \n");
        for(i=0;i<6;i++){
            strcpy(conj,terminaison_passe[i]);
            printf("%s %s\n",pronom[i],verbe);
        }
    printf("Voulez vous continuer(1/0) \n");
    scanf("%d",&continuer);


    }
    printf("\n Au revoir \n ");

    }

