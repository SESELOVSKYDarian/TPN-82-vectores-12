#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> GenerarVector(int n);
int EsParYDivisiblePor3(vector<int> a);
void MostrarVector(vector<int> A);

int main()
{
    vector<int> A;
    srand(time(NULL));
    int N = 8, a = 0, e = 0;
    A = GenerarVector(N);
    MostrarVector(A);
    cout<<"El primer numero par y divisible por 3: "<<EsParYDivisiblePor3(A)<<endl;
    return 0;
}

vector<int> GenerarVector(int n)
{
    vector<int> V;
    int e;
    for (int i = 0; i < n; i++)
    {
        e = rand() % 10;
        V.push_back(e);
    }
    return V;
}

int EsParYDivisiblePor3(vector<int> a)
{
    int suma = 0;
    for (int i = 0; i < a.size(); i++)
	{
		if (i==0)
		{
			i++;
		}
        if (i % 3 == 0 && a[i] % 2 == 0) 
		{
            suma += a[i];
        }
    }
    return suma;
}

void MostrarVector(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << "/";
    }
    cout << endl;
}