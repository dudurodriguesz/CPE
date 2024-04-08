#include <iostream>
using namespace std;
int main (){
	char caractere;
	cout << "Insira um caractere: ";
	cin >> caractere;
	
	 switch (caractere) {
	 	case 'a':
	 		cout << "Eh uma vogal." <<endl;
	 		break;
	 	case 'e':
	 		cout << "Eh uma vogal."<<endl;
	 		break;
	 	case 'i':
	 		cout << "Eh uma vogal." <<endl;
	 		break;
		case 'o':
	 		cout << "Eh uma vogal." <<endl;
	 		break;
		case 'u':
	 		cout << "Eh uma vogal." <<endl;
	 		break;
		default:
		 cout << "O caractere inserido nao eh uma vogal. "; 	 	 	
	 }
	
	return 0;
}

