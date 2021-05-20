#include <stdio.h>
#include <cs50.h>

int main(void){
	int val,row,i,j,k;
	val = get_int("");
	row = get_int("");

	if(val==1){
		for(i=row;i>0;i--){
			for(j=i;j>0;j--){
				printf("#");
			}
			printf("\n");
		}
	}
	else{
		for(i=0;i<row;i++){
			for(k=0;k<row-i-1;k++){
				printf(" ");
			}
			for(j=0;j<i+1;j++){
				printf("#");


			}
			printf("\n");
		}
	}

}
