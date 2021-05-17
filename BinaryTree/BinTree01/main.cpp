#include <iostream>
#include <string>
#include "Tree.h"
using namespace std;

int main()
{
	string line;
    int opt = 0;
    bool quit = false;
    

    cout << "Insira as chaves desejadas para inizializar a arvore" << endl;
    getline(cin, line);
    Tree bt(line);

    while(quit != true){

        cout << " Digite 1 para realizar percurso em ordem - 2 para exibir arvore - 3 para calcular numero de nos - 4 para calcular altura da arvore - 5 para sair  " << endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            bt.inorder();
            break;
         case 2:
            bt.bshow();
            break;
         case 3:
            cout << " A arvore possui o seguinte numero de nos: " << endl;
            cout << bt.size() << endl;
            
            break;
         case 4:
            cout << " A arvore possui a seguinte altura: " << endl;
            cout << bt.height() << endl;
            break;
         case 5:
            quit = true;
            break;        
        default:
            break;
        }


    }
    return 0;
}