#include <iostream>
#include <stdio.h>

#include "string.h"

using namespace std;


int main()


{

   char u[20]={'a','b','n','d','d','d','m','$','r','v','v','v','h','k','h','f'};
   //vector <int> tab(2);
   //char chaine1[200];
   char* chaine2;
   char chaine1 [10];

   int i=0;
   while ( u[i] !='$'&& i<(int)strlen(u) )
       {
         chaine1[i]=u[i];
           i++;

     };
      std:: cout<< sizeof( u)/sizeof(char);
     // for ( int i=0 ; i<(int)(sizeof(chaine1)/sizeof(char) ) ; i++)
      for ( int i=0 ; i<(int)strlen(chaine1); i++)
      std::cout<<chaine1[i];
      std:: cout<<"    ";
      std:: cout << strlen (chaine1)<<endl;
      chaine2 = strchr(u, '$');
       std::cout << "la deuxieme chaine"<<endl;

    if (chaine2 != NULL) // Si on a trouvé quelque chose
        chaine2++;

    //  for ( int i=0 ; i<(int) (sizeof(chaine2)/sizeof(char)) ; i++)
        for ( int i=0 ; i<(int)strlen(chaine1); i++)
        std::cout<<chaine2[i];



    //cout << "Hello world!" <<std::endl;
    return 0;
}
