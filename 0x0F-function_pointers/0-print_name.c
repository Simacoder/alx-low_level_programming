/**
 * print_name - prints names
 * @name: parameter member
 * @f: parameter member
 * Return: void
 */
void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
