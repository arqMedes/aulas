/* Recebe um número inteiro n > 0 e mostra sua decomposição em

fatores primos, calculando a multiplicidade de cada fator
e expondo como n = k1 x ki ... */

int main(void)

{

   int n, p, q, primo, div, i;
   printf("Informe n: ");
   scanf("%d", &n);
   p = 2;
   printf("% d = ", n);
   while (n > 1) {
         q = 0;
            while (n % p == 0) {
            	q++;
                n = n / p;
         	}
			if (q > 0 ){
				if (n > 1){
					for (i=0; i < q; i++)
						printf(" %d x", p);
				}
				else{
					for (i=0; i < q; i++)
						if (i == q - 1)
							printf(" %d ", p);
						else
							printf(" %d x", p);
				}
		  	}
          primo = 0;
          while (! primo) {
                   p++;
                   div = 2;
                  primo = 1;
              while (div <= p / 2 && primo) {
                   if (p % div == 0)
                        primo = 0;
                   if (p % div != 0)
                        div++;
             }
     }
 }

return 0; 
}
