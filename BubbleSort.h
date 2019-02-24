void BubbleSort(int amount, int *array){
	int i, j;

	for(i=amount-1; i>0; i--){
		for(j=0; j<i; j++){
			if(array[j] > array[j+1]){
				Exchange(&array[j], &array[j+1]);
			}
		}
	}
}//complexity O(n²)