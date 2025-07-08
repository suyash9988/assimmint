#include <stdio.h>
int main(){
	int totalminutes, hours,minutes;
	
	printf("Enter total minutes: ");
	scanf("%d",&totalminutes);
	
	hours = totalminutes / 60;
	minutes = totalminutes % 60;
	
	printf("%dminutes is equal to %d hour(s) and %d minutes(s).\n",totalminutes, hours, minutes);
	
	return 0;
	
}