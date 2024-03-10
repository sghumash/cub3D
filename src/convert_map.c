#include "cube3d.h"

int	arrsize(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
		i++;
	return (i - 1);
}

int	*strtoint(char *str)
{
	int	*int_array;
	int	i;

	int_array = (int *)malloc((ft_strlen(str) + 1) * sizeof(int));
	i = 0;
	int_array[ft_strlen(str)] = -42;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			int_array[i] = str[i] - '0';
		else
			int_array[i] = 0;
		i++;
	}
	return (int_array);
}

void	convert_to_int(t_map *map)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (map->map_arr[b])
		b++;
	map->int_arr = (int **)malloc((b + 1) * sizeof(int *));
	map->int_arr[b] = NULL;
	b = 0;
	while (map->map_arr[b])
	{
		map->int_arr[b] = strtoint(map->map_arr[b]);
		b++;
	}
}
