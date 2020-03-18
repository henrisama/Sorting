void Merge(int begin, int middle, int end, int *array){
	int i, j, k, *aux;
	aux = (int*) malloc((end-begin) * sizeof(int));

	i = begin;
	j = middle;
	k = 0;

	while(i < middle && j < end){
		if(array[i] < array[j]){
			aux[k] = array[i];
			i++;
		}
		else{
			aux[k] = array[j];
			j++;
		}
		k++;
	}
	while(i < middle){
		aux[k] = array[i];
		i++; k++;
	}
	while(j < end){
		aux[k] = array[j];
		j++; k++;
	}
	for(i=begin; i<end; i++)
		array[i] = aux[i-begin];
	free(aux);
}

void MergeSort(int begin, int end, int *array){
	if(begin < end-1){
		int middle = (begin+end)/2;
		MergeSort(begin, middle, array);
		MergeSort(middle, end, array);
		Merge(begin, middle, end, array);
	}
}//complexity O(nlogn)