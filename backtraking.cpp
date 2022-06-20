#include <iostream>
#include <vector>

using namespace std;

bool Valida(vector<int>& variaveis, int qntVar, int indice)
{
	
	if (indice % 2 == 0)
	{
		variaveis[indice] = 2;
	}
	else
	{
		variaveis[indice] = 5;
	}
	return true;
}

int backtracking(vector<int>& variaveis, int qntVar, int indice)
{
	if (indice == qntVar)
		return 0;
	if (Valida(variaveis, qntVar, indice))
	{
		backtracking(variaveis, qntVar, indice + 1);
	}
    return 0;
}

int main()
{
	int N = 8;
	vector<int> variaveis(N);
	backtracking(variaveis, N, 0);

	return 0;
}