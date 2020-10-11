void mx_printchar(char c);

void mx_cube(int n)
{
	if (n <= 1) return;
	for (int i = 0; i <=n/2; i++)	mx_printchar(' ');
	
	mx_printchar('+');
	for (int i = 0; i < 2 * n; i++)
	{
		mx_printchar('-');
	}
	mx_printchar('+');
	mx_printchar('\n');

	for (int i = 0; i < n / 2; i++)
	{
		for (int k=n/2-i;k>0;k--)mx_printchar(' ');
		mx_printchar('/');
		for (int j = 0; j < 2 * n; j++)
		{
			mx_printchar(' ');

		}
			
			mx_printchar('/');
			for (int k = 0; k <i; k++)mx_printchar(' '); 
			mx_printchar('|');
			mx_printchar('\n');
	}
	mx_printchar('+');
	for (int i = 0; i < 2 * n; i++)
	{
		mx_printchar('-');
	}
	mx_printchar('+');
	for (int k = 0; k < n / 2; k++)mx_printchar(' ');
	mx_printchar('|');
	mx_printchar('\n');
	for (int i = 0; i < n; i++)
	{
		mx_printchar('|');
		for (int i = 0; i < 2 * n; i++)
		{
			mx_printchar(' ');
		}
		mx_printchar('|');
		if (i < n - n / 2)
		{
			for (int k = 0; k < n / 2; k++)mx_printchar(' ');
			if (i==n-n/2-1)  mx_printchar('+');
		    else	    	mx_printchar('|');
		
		}
 
		else 
		{
			for (int k = 0; k < n-i-1; k++)mx_printchar(' ');
			mx_printchar('/');
		}
		mx_printchar('\n');
	}
	mx_printchar('+');
	for (int i = 0; i < 2 * n; i++)
	{
		mx_printchar('-');
	}
	mx_printchar('+');
	mx_printchar('\n');
}

