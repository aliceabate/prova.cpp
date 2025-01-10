#include <iostream>;
using namespace std;
int main()
{
    int matrice[3][3];
    int somma=0;
    int max;
    int r;
    int c;
    max=0;
    for (r=0; r<3; r++){
        
        for (c=0; c<3; c++){
            
            cout << "interisci i numeri" <<endl;
            cin >> matrice [r][c];
            somma= somma + matrice [r][c];
            
            if (matrice [r][c]>max){
                max=matrice [r][c];}
                else { matrice [r][c];}
            }
        }
        
     cout << "il numero massimo è" << max << " la somma è" << somma << std::endl;
    }
