#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

float funcion(float x, float y, float z);
float funcion2(float x, float y , float z);


float funcion2(float x, float y , float z){
  return z; 
}

float funcion(float x, float y,float z){
  return -y;
}

int main (){
  float y =1;
  float x = 0;
  float z = 0;
  float h=0.1;
  float k1,k2,k3,k4
  int i=0;  
  int N=10/h;

  
  for (i=0;i<N;i++){

    k1= funcion(x,y);
    k2= funcion(x+h/2,y+(h/2.0)*k1);
    k3= funcion(x+h/2,y+(h/2.0)*k2);
    k4= funcion(x+h/2,y+(h/2.0)*k3);
    y=y+(h/6.0*(k1+2.0*k2+2.0*k3+k4));

    k1= funcion2(x,y,z);
    k2= funcion2(x+h/2,y+(h/2.0)*k1,z+(h/2.0)*k1);
    k3= funcion2(x+h/2,y+(h/2.0)*k2,z+(h/2.0)*k2);
    k4= funcion2(x+h/2,y+(h/2.0)*k3,z+(h/2.0)*k3);
    z=z+(h/6.0*(k1+2.0*k2+2.0*k3+k4));
    
    x=x+h;
    
     
    cout << x << " " << y  << " " << z << endl;
    
  }


  return 0;
}
