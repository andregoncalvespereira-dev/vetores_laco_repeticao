#include <iostream>
#include <string>
using namespace std;

int main()
{
    int par_impar;
    
    cout<<"verificação de par ou impar"<<endl;
    
    for(int i=1;i <=10; i++){
        cout<<"digite um numeros: "<<endl;
        cin>>par_impar;
     
    if(par_impar % 2 == 0) {
        cout<<par_impar<<" É par"<<endl;
    }
    else{
        cout<<par_impar<<" É impar"<<endl;
    }
    
    }
    
    return 0;
}
