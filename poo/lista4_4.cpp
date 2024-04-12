
#include <iostream>
#include <iomanip> 
#include <unistd.h> 
 

using namespace std;


int iOpc;             
int iQtd = 0;
float fValor = 0;
int iQtdTotal     = 0;
float fValorTotal = 0;


float CalcularValor(float fValor, int iQtd){

   
   fValor = (fValor * iQtd);
    
   return fValor;
    
}

int main(){   
    
    do{
        
      iOpc   = 0;
      iQtd   = 0;
      fValor = 0;
      
      system("clear"); 

      cout << "\n\t\tMENU\n"; 
      cout << "\n\t1 - Produto 1 - R$ 2,98"; 
      cout << "\n\t2 - Produto 2 - R$ 4,50"; 
      cout << "\n\t3 - Produto 3 - R$ 9,98"; 
      cout << "\n\t4 - Produto 4 - R$ 4,49"; 
      cout << "\n\t5 - Produto 5 - R$ 6,87"; 
      cout << "\n\t0 - Finalizar o Aplicativo"; 
      
      cout << "\n\n\tInforme a Opcao Desejada = ";
      cin  >> iOpc;
      
      if (iOpc == 0){break;} 
      
      
      if (iOpc < 0 || iOpc > 5){
         cout << "\n=================\n";
         cout << " Opcao invalida! ";
         cout << "\n=================\n";
         sleep(3);
         continue;
      }
      
      cout << "\n\n\tInforme a quantidade vendida do Produto <" << iOpc << "> = ";
      cin >> iQtd;

      cout << "\n\t========================================";
      cout << "\n\t Valor Vendido do Produto " << iOpc << " foi = ";

      iQtdTotal += iQtd;
 
      switch (iOpc){
      
          case 1:
            fValor = CalcularValor(2.98, iQtd);
            break;
          case 2:
            fValor = CalcularValor(4.50, iQtd);
            break;
          case 3:
            fValor = CalcularValor(9.98, iQtd);
            break;
          case 4:
            fValor = CalcularValor(4.49, iQtd);
            break;
          case 5:
            fValor = CalcularValor(6.87, iQtd);
            break;
          case 0:
            break;
      }
      
      
      cout << fixed << setprecision(2) << fValor;
      cout << "\n\t========================================\n";
      sleep(2);
      
      fValorTotal += fValor;
 
    }while (iOpc >= 0 && iOpc <= 5);
    
    cout << "\n\t==================================================";
    cout << "\n\t A quantidade de Produtos vendidos foi = " 
         << iQtdTotal;
    cout << "\n\t Valor total dos Produtos vendidos foi =  " 
         << fixed << setprecision(2) << fValorTotal;
    cout << "\n\t==================================================\n";         
    
    
    return 0;  
}





