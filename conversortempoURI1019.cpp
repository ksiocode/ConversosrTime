#include <iostream>
using namespace std;


int Horas(int * rsegundos)
{
    return *rsegundos / (60 * 60);    
}

int Minutos(int * rsegundos)
{
    return (*rsegundos - (Horas(rsegundos) * (60 * 60))) / 60; 
}

int Segundos(int * rsegundos)
{
    return *rsegundos - (Minutos(rsegundos) * 60) - (Horas(rsegundos) * (60 * 60));
}


void Tempo(int rsegundos)
{
   cout << Horas(&rsegundos) << ":" << Minutos(&rsegundos) << ":" << Segundos(&rsegundos) << endl;
}



int main()
{ 

    int segundos;
    cin >> segundos;

    Tempo(segundos);
    
    return 0;
} 