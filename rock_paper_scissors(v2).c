#include<stdio.h>
//Hello Visal Yun!!!

main(){
	char choice, ans;
	int play=0, r=0, p=0, s=0;
	float guess_r, guess_s, guess_p;
	do{
	printf("Enter your choice(r/p/s): ");
	scanf("%s", &choice);
	while(choice!='r' && choice!='s' && choice!='p'){
		printf("Please open your eyes!!!\n");
		printf("________________________\n");
		printf("Enter your choice(r/p/s): ");
		scanf("%s", &choice);
	}
	play++;
	if(choice=='r'){
		printf("\nYou: Rock\n");
		r++;
		guess_r=(float)r/play;
	}
	else if(choice=='p'){
		printf("\nYou: Paper\n");
		p++;
		guess_p=(float)p/play;
	}
	else{
		printf("\nYou: Scissors\n");
		s++;
		guess_s=(float)s/play;
	}
	printf("Rock:%.2f\tPaper:%.2f\tScissors:%.2f\n",guess_r,guess_p,guess_s);
	
	printf("Play again(y/n): ");
	scanf("%s", &ans);
}while(ans='y');
}
