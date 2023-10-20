#include<iostream>
#include<math.h>5

using namespace std;

int main(){
  float a,b,c,x,x1,x2,delta;
  cin>>a>>b>>c;
  delta=(b*b)-(4*a*c);
  if(delta<0){
    cout<<"Phuong trinh vo nghiem"<<endl;
  }
  else if(delta==0){
    x=(-b)/(2*a);
     cout<<"Phuong trinh co nghiem kep"<<endl;
  }
  else {
    delta=sqrt(delta);
    cout<<"Phuong trinh co 2 nghiem phan biet" <<endl;
    x1 = (-b + delta) / (2*a);
		x2 = (-b - delta) / (2*a);
    cout<<"x1="<<x1<<endl;
    cout<<"x2="<<x2<<endl;
  }
  return 0;

}