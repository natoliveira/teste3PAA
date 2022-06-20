#include <vector>
#include <iostream>

using namespace std;


int Encontra(vector<vector<int>> & matriz, int linhai,int linhaf, int colunai, int colunaf, int valor){
    if((linhaf - linhai) == 0 && (colunaf - colunai) == 0)
    return matriz[linhai][colunai]; 
    
    else 
    {
        int divlinha = (linhai + linhaf) / 2;
        int divcoluna = (colunai + colunaf) / 2;
        int matriz1 = Encontra(matriz, linhai, divlinha, colunai, divcoluna, valor);
		int matriz2 = Encontra(matriz, linhai, divlinha, divcoluna + 1, colunaf, valor);
		int matriz3 = Encontra(matriz, divlinha + 1, linhaf, colunai, divcoluna, valor);
		int matriz4 = Encontra(matriz, divlinha + 1, linhaf, divcoluna + 1, colunaf, valor);
		//if quer dizer se
		if (matriz1 == valor || matriz2 == valor || matriz3 == valor || matriz4 == valor )
			return valor;
		//else quer dizer se não
		else 
			return 0;
	}
}

int main()
{

	vector<vector<int>> matriz = {{ 1, 2, 3, 4 },
									{ 5, 6, 7, 8 },
									{ 9, 10, 11, 12 },
									{ 13, 14, 15, 16 } };

	
	int valor = 2 ;
	cout << Encontra(matriz,0,3,0,3, valor) << " " ;
	return 0;
}
