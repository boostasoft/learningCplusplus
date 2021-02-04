#include <iostream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

using namespace std;

int main()
{  // int a=9;
  int b= 445292342;
  char u[20];
   int tab [2];
   char chaine1[20];
   sprintf(u , "%d" , b) ;
   cout<< u << endl;
   int i=0;
   while ( u[i] !='9'&& i<20  )
       {
         chaine1[i]=u[i];
           i++;

     };

    tab[0]=atoi(chaine1);
    cout<< tab[0]<<endl;
    char *chaine = strchr(u, '9');
    if (chaine != NULL) // Si on a trouvé quelque chose
        chaine++;

    tab[1]=atoi(chaine);
    cout << tab[1];

    cout << "Hello world!" << endl;
    return 0;
}
