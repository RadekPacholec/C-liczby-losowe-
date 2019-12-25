#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>


using namespace std;

int liczba, strzal, ile_prob=0;
int main()
{
    cout << "Pomysl sobie liczbe 1..100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;



    while(strzal != liczba)
        {
            ile_prob++;
            cout << "Zgadnij liczbe:To twoja "  <<ile_prob<<" proba:";
            cin >> strzal;

                if (strzal == liczba)
                cout<<"wygrywasz w  "<< ile_prob<<  " probie"<<endl;

                if (strzal < liczba)
                cout<<"za malo"<<endl;

                if (strzal > liczba)
                cout<<"za duzo"<<endl;

        }
   getchar();getchar();
    return 0;

}
