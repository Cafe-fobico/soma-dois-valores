#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv){
int result, n1, n2;
int *p1, *p2;

cout<<"Informe o primeiro valor:\n";
cin>> n1;
cout<<"Informe o segundo valor:\n";
cin>> n2;
p1=&n1;
p2=&n2;
result=(*p1+*p2);
system("cls");
cout<<"\n Resultado da soma: ";
cout<<result;

return 0;
}
