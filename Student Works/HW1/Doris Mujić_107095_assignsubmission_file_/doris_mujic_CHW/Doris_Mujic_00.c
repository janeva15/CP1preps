#include<stdio.h>
//in order to get cosine function
#include<math.h>


int main(){

	//declaration of variabes
	float a,b,C;
	
	//Asking the user for input
	printf("\n Hi, this program will tell if the triangle is obtuse, right-angled or acute\n");
	printf("\n Please insert the numbers \n");
	
	//gathering user input
	scanf("%f",&a);
	scanf("%f",&b);
	
	//asking for the angle and input
	printf("\n Please input the angle C\n");
	scanf("%f",&C);

	//
	if(C==90){
	printf("\n This triangle is right angled");
	}
	else if(C<90){
	printf("\n This tirangle is an acute one");
	}
	else if(C>90){
	printf("\n This tirangle is an obtuse one");
	}
return 0;
}//end main