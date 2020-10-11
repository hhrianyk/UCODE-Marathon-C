void mx_printchar(char c);


void mx_pyramid(int n)
{ 	
	// проверка условия задачи 
	if(n % 2 != 0 || n <= 1) return;
	
	
	for(int i = 0; i < n; i++) 
	{	
		// пробелы до левого ребра
		for(int j = 1; j < n - i; j++) 
		{								
			mx_printchar(' ');
		}

		// левое ребро 
		mx_printchar('/');
		
		// заполнение внутренности пирамиды
		for(int j = 0; j < i * 2 - 1; j++)
		{	
			// если строка последняя заполняет underscorом
			if(i == n - 1)
				mx_printchar('-');
			else	
				mx_printchar(' ');
		}
		// переднее правое ребро
		if(i > 0) mx_printchar('\\');
		
		if(i < n / 2) 
		{	
			// заполнение пространство между правыми ребрами
			for(int j = 0;j < i; j++)
				mx_printchar(' ');
			// правое ребро
			mx_printchar('\\');
		}
		else			
		{	
			for(int j = n - i - 1; j > 0 ; j-- )
				mx_printchar(' ');
			// если i < половина размера, то выводит вертикальную правую заднюю грань
 			mx_printchar('|'); 
		}

		mx_printchar('\n');	
	}		
}

