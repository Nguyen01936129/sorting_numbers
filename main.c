/*
 Describe this program: this program will read numbers in the file "test". 
 Then, sorting the numbers and put the numbers which were sorted into the file with the sentence "The value after sorting". 
*/
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int num[], int size);
void swap(int *a, int *b);

int main(int argc, char *argv[]) {
	FILE* file;
	int num[16];
	int k, i, j, temp, count=0;
	char ch;

	file=fopen("test.txt","r+");
	if(file==NULL){
		printf("Could not find the file.\n");
		exit(1);
	}

	for(i=0;i<10;i++){
		fscanf(file, "%d",&num[i]);
	}
	printf("The values before sorting.\n");
	for(i=0;i<10;i++){
		printf("%d ",num[i]);
		
	}
	printf("\n===========================\n");
	printf("The values after sorting.\n");
	fprintf(file,"\n===========================\n");
	fprintf(file,"The values after sorting.\n");
	bubble_sort(&num,10);
	fprintf(file, "\n");
	for(i=0;i<10;i++){
		printf("%d ",num[i]);
		fprintf(file,"%d ",num[i]);
	}
	
	fclose(file);
	
	return 0;
}
//sorting values
void bubble_sort(int num[], int size){
	int i,j;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-1;j++){
			if(num[j]>num[j+1]){
				swap(&num[j],&num[j+1]);
			}
		}
	}
}

void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}









