void Exchange(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}//inverts the values