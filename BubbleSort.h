void swap(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}//inverts the values

void BubbleSort(int amount, int *array){
	int i, j;

	for(i=amount-1; i>0; i--){
		for(j=0; j<i; j++){
			if(array[j] > array[j+1]){
				swap(&array[j], &array[j+1]);
			}
		}
	}
}//complexity O(n²)