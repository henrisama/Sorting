void Exchange(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}//inverts the values

void SelectionSort(int amount, int *array){
	int i, j, min;
	for(i=0; i<(amount-1); i++){
		min = i;
		for(j=i+1; j<amount; j++){
			if(array[min] > array[j])
				min = j;
		}
		Exchange(&array[i], &array[min]);
	}
}//complexity O(n²)