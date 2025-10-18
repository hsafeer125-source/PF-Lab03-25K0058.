#include <stdio.h>

int main(){
	int n1,n2,n3,n4,n5;
	printf("Here: \n- 1 represents Ace, \n- 2-10 represent cards numbered 2 through 10, \n- 11 represents Jack, \n- 12 represents Queen, \n- 13 represents King.");
	printf("\nEnter your Poker Hand in the range 1...13 : ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	
	if((n1==n2 && n2==n3 && n3!=n4 && n4==n5) ||
		(n1==n2 && n2==n4 && n4!=n3 && n3==n5)||
		(n1==n2 && n2==n5 && n5!=n4 && n4==n3)||
		(n1==n3 && n3==n4 && n4!=n5 && n5==n2)||
		(n1==n3 && n3==n5 && n5!=n4 && n4==n2)||
		(n1==n4 && n4==n5 && n5!=n3 && n3==n2)||
		(n2==n3 && n3==n4 && n4!=n5 && n5==n1)||
		(n2==n3 && n3==n5 && n5!=n4 && n4==n1)||
		(n2==n4 && n4==n5 && n5!=n3 && n3==n1)||
		(n3==n4 && n4==n5 && n5!=n2 && n2==n1)){
		printf("The hand (%d, %d, %d, %d, %d) is a full house.", n1, n2, n3, n4, n5);
	}
	else{
		printf("The hand (%d, %d, %d, %d, %d) is not a full house.", n1, n2, n3, n4, n5);
	}
    return 0;
}