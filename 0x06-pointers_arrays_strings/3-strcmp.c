/**
 * _strcmp - A progam to compare two strings
 *		and print number of equal character
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: 0 if s1 and s2 are equal
 *        negative integer if the stopping character
 *                in @s1 was less than the stopping
 *                character in @s2
 *        positive integer if the stopping character
 *                in @s1 was greater than the stopping
 *                character in @s2
*/

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/**
		 * if they differ by a single character
		 * don't iterate further
		*/
		if (s1[i] != s2[i])
		{
			/*
			 * return the difference between
			 * the two characters
			*/
			diff = s1[i] - s2[i];
			break;
		}
		else
		{
			diff = s1[i] - s2[i];
		}
		i++;
	}

	return (diff);
}
