#include "Dictionary.h"
#include "DrawMenu.h"
#include <ctime>




int main()
{

	clock_t start;
	//start = clock();
	DictionaryInterface Dict;
	double t;// = (double)(clock() - start);
	//cout << "Height of AVL Tree: " << Dict.heightData() << "\n\n";

	start = clock();
	//Dict.Search("above");

	//Oxford English Dictionary.txt
	Dict.ReadFile("Oxford English Dictionary.txt");
	t = (double)(clock() - start);
	cout << "Time read: ";
	printf("%-20.6lf\n", t);
	//cout << "Time search: ";
	//printf("%-20.6lf\n", t);
	

	
	//RunDictionary(Dict);

	


	return 0;
}
