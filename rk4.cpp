#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
float funcion(float x, float y);


float funcion(float x, float y){
  return -y;
}


int main (){
  double y=1.0;
  double x =0.0;
  double h=0.1;
  int i=0;  
  int N=3/h;
  double k1;
  double k2;
  double k3;
  double k4;
  for (i=0;i<N;i++){
    k1= funcion(x,y);
    k2= funcion(x+h/2,y+(h/2.0)*k1);
    k3= funcion(x+h/2,y+(h/2.0)*k2);
    k4= funcion(x+h/2,y+(h*k3);
    y=y+(h/6.0*(k1+2.0*k2+2.0*k3+k4));
    x=x+h;

    cout << x << " " << y  << endl;
    }


  return 0;
}
