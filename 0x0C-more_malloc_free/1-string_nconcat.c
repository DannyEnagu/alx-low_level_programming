#include "main.h"

/**
 * string_nconcat - A function that concatenate two strings
 *		starting from begining of s2 and end at n
 * @s1: 1st string
 * @s2: 2nd string
 * @n: stop point
 *
 * Return: pointer to new string (s3)
 *	on success or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, l1, l2;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;

		/* size of s1 */
	l1 = 0;
	while (s1[l1] != '\0')
		l1++;

	/* size of s2 */
	l2 = 0;
	while (s1[l2] != '\0')
		l2++;

	n >= l2 ? n = l2 : n;

	s3 = (char *) malloc((l1 + n + 1) * sizeof(char));

		if (s3 != NULL)
	{

		for (i = 0; s1[i] != '\0'; ++i) /*get lenght of s1*/
			*(s3 + i) = s1[i];

	/*loop over s2 length it's  element */
		for (j = 0; j <= n && s2[j] != '\0'; j++)
		{
			s3[i] = s2[j];
			i++;
		}
		s3[i] = '\0';

	}
	else
		return (NULL);

	return (s3);
}
