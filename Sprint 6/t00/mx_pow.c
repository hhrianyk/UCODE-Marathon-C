double mx_pow(double, unsigned int);

double mx_pow(double n, unsigned int pow)
{
	double p = 1;
	for(unsigned int i = 0; i < pow; i++)
		p *= n;
	return p;
}
