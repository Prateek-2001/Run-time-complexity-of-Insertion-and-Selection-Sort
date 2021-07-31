#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>

//Selection Sorting
void insertionsort(int array[], int size, int type){
	
	// Loop to traverse through the array 
	for (int i = 0; i < size ; ++i){
				
		int key = array[i];
		int j = i-1;

		//Comparing the elements in Ascending order
		if (type == 1){

		while(j >= 0 && array[j] > key){
		       array[j+1] = array[j];
		       j = j - 1;
		}
		       array[j+1] = key;
		}

		//Comparing the elements in Descending order
		if (type == 2){

		while (j>=0 && array[j] < key){
			array[j+1] = array[j];
			j = j-1;	
		
		}
		array[j+1] = key;
}
}
}

int main(){
	
	int sample_size, data, type;

	struct timeval start, end;
 
	printf("Enter Sample Size:");
	
	scanf("%d", &sample_size);
	
	printf("Enter Ascending (1) or Descending Order (2):");

	scanf("%d", &type);

	int array[sample_size];

	for(int i = 0; i < sample_size; i++){
		array[i] = rand();
	}

	gettimeofday(&start, NULL);

	insertionsort(array, sample_size, type);

	gettimeofday(&end, NULL);

	long seconds = (end.tv_sec - start.tv_sec);

    	long micros = ((seconds * 1000000) + end.tv_usec) - (start.tv_usec);
 	
	// Output in Seconds and Microseconds
    	printf("The elapsed time is %ld seconds and %ld micros\n", seconds, micros);

	return 0;
}

