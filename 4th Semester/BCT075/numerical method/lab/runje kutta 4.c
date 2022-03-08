#include<stdio.h>
#include<math.h>
// Solve Y" + 2Y' - 3Y = 6X by R-K4 method
// Y' = Z(put)
//Z'+2Z-3Y=6X


//#define f(x,y,z) z	//  dy/dx
//#define g(x,y,z) (3*y-2*z+6*x)   //  dz/dx


float f(float x, float y, float z){
	return z;
}
float g(float x, float y, float z){
	return (3*y-2*z+6*x);
}

int main(){
 	printf("R-K4 Method:\n\tY\" + 2Y' - 3Y = 6X\n");
 	float x,y,z,x0,y0,z0,xn,h,k,l,k1,k2,k3,k4,l1,l2,l3,l4;
 	printf("Give X0, Y0, Z0, Xn, h:  ");
 	scanf("%f%f%f%f%f",&x0,&y0,&z0,&xn,&h);
 	printf("--------------\n");
 	x=x0;
 	y=y0;
 	z=z0;
 	while(x<xn){
 		k1=h*f(x,y,z);
 		l1=h*g(x,y,z);
 		k2=h*f(x+0.5*h,y+0.5*k1,z+0.5*l1);
 		l2=h*g(x+0.5*h,y+0.5*k1,z+0.5*l1);
 		k3=h*f(x+0.5*h,y+0.5*k2,z+0.5*l2);
 		l3=h*g(x+0.5*h,y+0.5*k2,z+0.5*l2);
 		k4=h*f(x+h,y+k3,z+l3);
 		l4=h*g(x+h,y+k3,z+l3);
 		
 		k=(k1+2*k2+2*k3+k4)/6;
 		l=(l1+2*l2+2*l3+l4)/6;
 		
 		x=x+h;
 		y=y+k;
 		z=z+l;
 		printf("when x= %f, --> y= %f, z= %f\n",x,y,z);
	}
	return 0;
 }
