#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre[5];
    float notas[5], promedio=0,suma=0;

    for (int i=0;i<=4;i++){

        cout<<"ingrese nombre de estudiante "<<i<<":"<<endl;
        cin>>nombre[i];
        cout<<"ingrese notas de estudiante "<<i<<":"<<endl;
        cin>>notas[i];

    }
    suma=notas[0]+notas[1]+notas[2]+notas[3]+notas[4];
    promedio=suma/5;
    cout<<"promedio :"<<promedio<<endl;

    for(int e=0;e<=4;e++){
        cout<<"estudiante "<<nombre[e]<<":"<<endl;
        cout<<"nota:"<<notas[e]<<endl;

    }





    return 0;
}
