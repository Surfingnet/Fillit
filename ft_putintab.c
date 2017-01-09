nclude "fillit.h"

char**ft_putintab(char *s, int le	n)
{
	char **tab;
	int i;
	int j;
	int u;

	i = 0;
	j = 0;
	u = 0;


	if (!(tab = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	while (s[j] != '\0' && tab[u])
	{
		i = j;
		j = 0;
		while (s[j] != '\n' && s[j + 1] != '\n' && s[j + 1] != '\0')
		{
			j++;
		}
		tab[u] = ft_strsub(s, i, j - i);
		ft_putendl(tab[u]);
		u++;
	}
	tab[u] = NULL;
	return (tab);
}
