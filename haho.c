#include <stdio.h>            // preprocesszor utasítás
 
int main()                    // függvénydefiníció, egyúttal a program belépési pontja, ezúttal nincs paramétere
{                             // blokk kezdete
int i;                        // deklaráció
 
for(i=1; i <= 3; i++)         // vezérlő (ciklus-) utasítás. A ++ egyváltozós értékadó művelet: eggyel növeli i-t.
        {                     // újabb blokk-kezdet
        printf("Haho\n");     // I/O műveletet végző könyvtári függvény. A konzolra ír. 
                              // A stringkonstansot "-k közé kell zárni. A \n az új sor jele a stringben.
        }                     // a belső blokk vége
return 0;                     // vezérlő utasítás: kilépés a függvényből. A main értékét az operációs rendszer kapja meg
                              // Windows-ban az errorlevel, Unixban a $? változóban.
}                             // main blokkjának vége

