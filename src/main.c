#include "game.h"

int main()
{
    char j1[100]="Player A";
    char j2[100]="Player B";
    int Matches=VALMAX;
    system("MODE CON LINES=40 COLS=110");
    srand(time(NULL));
    setColour(BLANC,NOIR);
    clrScr();
    menu(j1,j2,&Matches);
    return 0;
}

/*
- R�solution de l'�cran : (110,40)
- Attention pour le changement du nombres d'allumettes (Allumettes sup�rieur � 21) ne donne pas d'effet graphique !
*/
