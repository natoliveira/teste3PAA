#include <iostream>
#include <vector>

using namespace std;

void resposta(vector<int> vetor)
{
	for (int i = 0; i< vetor.size(); i++)
	//percorre e imprime vetor
		cout << vetor[i] << " ";
	cout << "\n";
}

bool Valida(vector<int>& variaveis, int N, int valor)
{
    //função com os parâmetros utilizados no algoritmo
	int par = 0, impar = 0;
	//inicializando com o 0 para realizar o somatório.
	//verifica se índice e o valor é par
	if (variaveis.size() % 2 == 0 && valor % 2 == 0)
		return true;
	//verifica se índice e o valor é ímpar
	if (variaveis.size() % 2 != 0 && valor % 2 != 0)
		return true;
		//percorre valores das variáveis e faz somatório do par e impar
	for (int i = 0; i < variaveis.size(); i++)
	
		if (i % 2 == 0)
			par += variaveis[i];
		else
			impar += variaveis[i];
			//compara qual é o maior
	if (par < impar)
		return true;
	return false;
}

void backtracking(vector<int>& variaveis, int N)
{   
    //saida depois de pecorrer todos os valores, exibe variáveis encontradas
	if (variaveis.size() == N)
		return resposta(variaveis);
	//
	for (int i = 1; i<= 5*N; i++)
	//verifica as condições, se é par ou impar e se o par é menor que o impar
		if (Valida(variaveis, N, i))
		{
			variaveis.push_back(i);
			backtracking(variaveis, N);
			//retira o valor inserido.
			variaveis.pop_back();
		}
}

int main()
{
	int N = 2;
	vector<int> variaveis;
	backtracking(variaveis, N);
	return 0;
}