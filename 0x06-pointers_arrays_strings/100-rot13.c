/**
 * rot13 - encodes a srting
 *
 * @s: string input
 *
 * Return: a pinter to the endcoded string
*/

char *rot13(char *s)
{
	int i, j;

	/*english alphabets from a-z and A-Z*/
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	/*rot13 equivalent of alpahabets*/
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == alphabets[j])
			{
				*(s + i) = rot13[j];
				break;
			}
		}
	}

	return (s);
}
