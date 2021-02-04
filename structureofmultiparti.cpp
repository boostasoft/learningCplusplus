#include <iostream>
#include <vector>
#include <math.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <vector>


using namespace std;
struct element{
    int ids; // identificateur de la famille originale
    int rang;
   // vector< ensemble> suiteE;
       };
struct ensemble{
    vector<element> suite_E;
   // vector< ensemble> suiteE;
};
struct famille{
    vector <ensemble> suite_F;
};
int main()

{ cout<< "comment"<< endl;

  vector<famille>multiparti;
  element elt;
  ensemble ens;
  famille fam;

for(int k=0 ; k< 3 ;k++){

    for( int i=0;i< 4 ; i++)
       {

        for (int j=0 ; j< 3; j++)
           {
                elt.ids =k ;
                elt.rang=j;
                ens.suite_E.push_back(elt);

           }
           fam.suite_F.push_back(ens);
           ens.suite_E.clear();

       }
       multiparti.push_back(fam);
        fam.suite_F.clear();

}
vector <famille>::iterator it;
 //vector <ensemble>::iterator it;
// vector <famille>::iterator it;
cout << (int) multiparti.size()<< endl;
cout << (int) multiparti[0].suite_F.size() << endl;
cout << (int) multiparti[0].suite_F[0].suite_E.size()<< endl;

//vector < element> it_E;
//for ( it= multiparti.begin(); it <multiparti.end(); it++){}

 for ( int k=0 ; k < (int) multiparti.size(); k++){

    for ( int i=0 ; i < (int) multiparti[k].suite_F.size();i++)
        {
        for ( int j=0 ; j < (int) multiparti[k].suite_F[i].suite_E.size(); j++){
        cout << multiparti[k].suite_F[i].suite_E[j].ids;
        cout << multiparti[k].suite_F[i].suite_E[j].rang;
        cout << " " ;

         }

        cout << "ensemble" << i << endl;
    }

    cout << "la famille"  << k << endl;
 }





    return 0;
}
