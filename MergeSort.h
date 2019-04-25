void Merge(int p, int q, int r, int *array){
	int i, j, k, *aux;
	aux = (int*) malloc((r-p) * sizeof(int));

	i = p;
	j = q;
	k = 0;

	while(i < q && j < r){
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
	while(i < q){
		aux[k] = array[i];
		i++; k++;
	}
	while(j < r){
		aux[k] = array[j];
		j++; k++;
	}
	for(i=p; i<r; i++)
		array[i] = aux[i-p];
	free(aux);
}

void MergeSort(int p, int r, int *array){
	int q;
	if(p < r-1){
		q = (p+r)/2;
		MergeSort(p, q, array);
		MergeSort(q, r, array);
		Merge(p, q, r, array);
	}
}