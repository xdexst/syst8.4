#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("Test v8.4: OK.\n");
	srand(time(0));

	int i,j,UPdiagonal=0,UNDERdiagonal=0,a[4][4];
	
	printf("Your matrix:\n");
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++) {
			a[i][j]=rand()%9+1;
			if(j>i) UPdiagonal+=a[i][j];
			if(j<i) UNDERdiagonal+=a[i][j];
			if(j==3){printf("%d\n",a[i][j]);}
			else {printf("%d, ",a[i][j]);}
		}
	}
	
	printf("Sum upper diagonal: %d\n",UPdiagonal);
	printf("Sum under diagonal: %d\n",UNDERdiagonal);
	return 0;
}
