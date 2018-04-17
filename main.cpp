#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre[7];
    float sueldos[7], extras[7],hijos[7], suelt[7];
    float aumento=0,mas=0;
    for (int i=0;i<=6;i++){

        cout<<"ingrese nombre de empleado"<<i<<": "<<endl;
        cin>>nombre[i];
        cout<<"ingrese sueldo trabajador"<<i<<": "<<endl;
        cin>>sueldos[i];
        cout<<"ingrese # de horas extras: "<<endl;
        cin>>extras[i];
        cout<<"# de hijos: "<<endl;
        cin>>hijos[i];

        if(hijos[i]>3){
            aumento=sueldos[i]*0.1;
            cout<<aumento<<endl;

        }
        if(extras>0){
            mas=(sueldos[i]*0.01)*extras[i];
            cout<<mas<<endl;
        }
        suelt[i]=sueldos[i]+aumento+mas;
        cout<<suelt[i]<<endl;
    }


    for(int e=0;e<=6;e++){
        cout<<"trabajador"<<nombre[e]<<": "<<endl;
        cout<<"sueldo: "<<sueldos[e]<<endl;
        cout<<"extras: "<<extras[e]<<endl;
        cout<<"# de hijos: "<<hijos[e];
        cout<<"aumentos: "<<endl;
        cout<<""<<endl;
        cout<<"por extras: "<<mas<<endl;
        cout<<"por hijos: "<<aumento<<endl;
        cout<<"sueldo total: "<<suelt[e]<<endl;
    }





    return 0;
}
