#include <stdio.h>
#include <cs50.h>
int main(void){
	float height,weight,bmi,p=2;
	string name;
	name  = get_string("enter your name\n");
	height= get_float("enter your height\n");
	weight= get_float("enter your weight\n");
	bmi = weight/(height*height);	
	if (bmi<18.5){
		printf("%s %.2f underweight\n",name,bmi );
	}
	else if(bmi>=18.5 && bmi<=24.9){
		printf("%s %.2f normal weight\n",name,bmi );
	}
	else if(bmi>=25 && bmi<=29.9){
		printf("%s %.2f overweight\n",name,bmi );
	}
	else {
		printf("%s %.2f obese\n",name,bmi );
	}

}
