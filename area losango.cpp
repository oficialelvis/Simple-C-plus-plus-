#include<iostream>
#include<cmath>
#include<locale>
//atividade 16-> b) area de um losango
using namespace std;

int main (){
		setlocale(LC_ALL, "Portuguese");
		
	int diagonal_maior, diagonal_menor;
	float area_losango;
	
		cout << "** Ol�, vamos calcular a area de um losango." << endl;
		cout << "**Precisaremos de duas medidas: - Diagonal Maior - Diagonal Menor";
		cout << endl;
	
		cout << "- Digite a medida da diagonal maior: ";
		cin >> diagonal_maior;
	
		cout << "- Digite a medida da diagonal menor: ";
		cin >> diagonal_menor;
		cout << endl;
	
			area_losango = (diagonal_maior + diagonal_menor)/2;
	
		cout << "A �rea do losango � : ";
		cout << area_losango;
		cout << "cm�";	
	
	system("PAUSE >> NULL");
	return 0;
}
