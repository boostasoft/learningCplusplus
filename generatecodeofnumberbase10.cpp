#include <iostream>
// ce programme prend un entier et genere
// sa valeur dans la base 10
using namespace std;

int main()
{ int n=10;
 // int s=n;

 // int chiffre[20];
  int nbre=0;
//  int base=10;
  int p=1;
  int j=0;
  while (n > 0)
  {
      int q=n/10;
      int reste=n-q*10;
      if ( reste < 8)
      nbre= nbre+ reste*p;
      else
       { cout << "error"<<" position_de_la droite_vers_la_gauche";
         cout<< j;
         break;
       }
      j++;
      p=p*8;
      n=q;

  }

   cout << nbre << endl;

    cout << "Hello world!" << endl;
    return 0;
}
