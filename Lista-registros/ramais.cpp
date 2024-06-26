#include <iostream>
#include <cstdlib>;
using namespace std;
struct ramal{
	int numramal;
	int categoria;
	string setor;
	int edificio;
	int sala;
	string resramal;
	string resateste;
};

int main(){
	
	ramal ramalcadastro;
	
	cout << "Digite seu numero do ramal (valor entre 1000 e 2999)" << "\n";
	cin >> ramalcadastro.numramal;
	
	system ("cls");
	
	cout << "Digite sua a categoria do sistema de telefonia." << "\n" << "Categoria 0: nao faz ligaçao." << "\n" << "Categoria 1: ligaçao interna." << "\n" << "Categoria 2: ligaçao local (fixo)." << "\n" << "Categoria 3: ligaçao local (fixo e celular)." << "\n";
	cout << "Categoria 4: ligaçao local (fixo) e DDD (fixo)." << "\n" << "Categoria 5: ligaçao local (fixo e celular) e DDD (fixo e celular)." << "\n" << "Categoria 6: ligaçao local (fixo e celular), DDD (fixo e celular) e DDI." << "\n";
	cin >> ramalcadastro.categoria;
	
	system ("cls");
	
	cout << "Digite a sigla do setor em que o ramal esta localizado." << "\n" << "SETEL:Secao de Telecomunicacoes." << "\n" << "DIBEN:Divisao de Beneficios." << "\n"<< "PATRIMONIO." << "\n" << "PROTOCOLO." << "\n";
	cin >> ramalcadastro.setor;
	system ("cls");
	
	cout << "Digite o edificio de localizacao." << "\n" << "500 - edificio sede." << "\n" << "505 - o edifício localizado na SEPN 505 AsaNorte." <<"\n";
	cin >> ramalcadastro.edificio;
	system ("cls");
	
	cout << "Digite o numero da sala (numero do andar + dois digitos)." << "\n";
	cin >> ramalcadastro.sala;
	system ("cls");
	
	cout << "Digite o nome do responsavel pelo ramal." << "\n";
	cin >> ramalcadastro.resramal;
	system ("cls");
	
	cout << "Digite o nome do responsavel pelo ateste." << "\n";
	cin >> ramalcadastro.resateste;
	system ("cls");
	
	cout << "-----INFORMACOES GERAIS DO RAMAL-----" << "\n" << "Ramal: " << ramalcadastro.numramal << "\n" << "Categoria: " << ramalcadastro.categoria << "\n" << "Setor: " << ramalcadastro.setor << "\n";
	cout << "Edificio: " << ramalcadastro.edificio << "\n" << "Sala: " << ramalcadastro.sala << "\n" << "Responsavel pelo ramal: " << ramalcadastro.resramal << "\n" << "Responsavel pelo ateste: " << ramalcadastro.resateste;
	
	return 0;
}
