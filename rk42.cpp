#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

float funcion(float x, float y);
float funcion2(float x, float y , float z);


float funcion2(float x, float y , float z){
  return z; 
}

float funcion(float x, float y){
  return -y;
}

int main (){
  float y =1;
  float x = 0;
  float z = 0;
  float h=0.1;
  float k1,k2,k3,k4;
  float k11,k22,k33,k44;
  int i=0;  
  int N=10/h;

  
  for (i=0;i<N;i++){

    k1= funcion(x,y);
    k2= funcion(x+h/2,y+(h/2.0)*k1);
    k3= funcion(x+h/2,y+(h/2.0)*k2);
    k4= funcion(x+h/2,y+(h*k3);
    y=y+(h/6.0*(k1+2.0*k2+2.0*k3+k4));

    k11= funcion2(x,y,z);
    k22= funcion2(x+h/2,y+(h/2.0)*k1,z+(h/2.0)*k1);
    k33= funcion2(x+h/2,y+(h/2.0)*k2,z+(h/2.0)*k2);
    k44= funcion2(x+h/2,y+(h/2.0)*k3,z+(h*k3);
    z=z+(h/6.0*(k11+2.0*k22+2.0*k33+k44));
    
    x=x+h;
    
     
    cout << x << " " << y  << " " << z << endl;
    
  }


  return 0;
}
