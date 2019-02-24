void InsertionSort(int amount, int *array){
	int i, j, x;
	for(i=1; i<amount; i++){
		x = array[i];
		for(j= i-1; j>=0 && array[j] > x; j--){
			array[j+1] = array[j];
		}
		array[j+1] = x;
	}
}//complexity O(n²)