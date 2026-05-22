/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:06:17 by omatalla          #+#    #+#             */
/*   Updated: 2026/05/22 16:44:11 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h> //for printf
//#include <stdlib.h> //for free

static int	count_words(char const *str, char separator)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		if (str[i] != separator)
		{
			word_count++;
			while (str[i] && str[i] != separator)
				i++;
		}
		else
			i++;
	}
	return (word_count);
}

static int	get_word_length(char const *str, char separator)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != separator)
		len++;
	return (len);
}

static void	free_words(char **array, int words_filled)
{
	int	i;

	i = 0;
	while (i < words_filled)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	**fill_words(char **w_a, char const *str, char sep)
{
	int	w_i;
	int	w_l;

	w_i = 0;
	while (*str)
	{
		while (*str == sep)
			str++;
		if (!*str)
			break ;
		w_l = get_word_length(str, sep);
		w_a[w_i] = ft_substr(str, 0, w_l);
		if (!w_a[w_i])
			return (free_words(w_a, w_i), NULL);
		w_i++;
		str = str + w_l;
	}
	w_a[w_i] = NULL;
	return (w_a);
}

char	**ft_split(char const *str, char separator)
{
	char	**w_a;

	if (!str)
		return (NULL);
	w_a = malloc(sizeof(char *)
			* (count_words(str, separator) + 1));
	if (!w_a)
		return (NULL);
	return (fill_words(w_a, str, separator));
}
/*Notes about this version:
count_words counts how many words exist before allocating memory
get_word_length calculates how long the word is
free_words prevents memory leaks if the word allocation fails
free_words frees each string and the array itself
return (free_words(w_a, w_i), NULL): execute () and return NULL
"free memory, return NULL"
fill_words copies the words in each position of the array  with ft_substr
fill_words uses "str = str + w_l" to skip the word that has been copied 
ft_split protects against invalid str
ft_split allocates the memory block for the array, including NULL (+1)
strings end with '\0', arrays of strings end with NULL
ft_split checks if malloc worked
ft_split finally fills the array and returns it!

In a nutshell, ft_split should scan the string and:
- find words
- copy words into new memory
- store pointers in array
- return array
And:
- Each word is separately allocated in memory
- The array itself is allocated too
- The last element is always NULL
*/
/*
char	**ft_split(char const *str, char separator)
{
	char	**words_array;
	int		word_count;
	int		word_index;
	int		word_length;

	if (str == NULL)
		return (NULL);
	word_count = count_words(str, separator);
	words_array = malloc(sizeof(char *) * (word_count + 1));
	if (words_array == NULL)
		return (NULL);
	word_index = 0;
	while (*str != '\0')
	{
		while (*str == separator)
			str++;
		if (*str == '\0')
			break ;
		word_length = get_word_length(str, separator);
		words_array[word_index] = ft_substr(str, 0, word_length);
		if (words_array[word_index] == NULL)
		{
			free_words(words_array, word_index);
			return (NULL);
		}
		word_index++;
		str = str + word_length;
	}
	words_array[word_index] = NULL;
	return (words_array);
}*/
//My original version is clearer to me but ft_split has more than 125 lines.
/*
int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("Mit dir sind wir vier", ' ');
	i = 0;
	while (result[i] != NULL)
	{
		printf("word[%d] = %s\n", i, result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
/*Step_1: count_words
A word starts when:
- current char is not separator
- and previous char is separator or start of string
Step_2: get_word_length
- Start at the beginning of a word
- Count letters until separator or string end
Step_3: free_words
- Free every word created
- Free the array itself too. Don't forget!
Step_4: **ft_split (split my head, it  hurts!)
- Count how many words exist
- Allocate the array
- For my example: ["Mit", "dir", "sind", "wir", "vier", NULL]
- Find each word
- Copy each word
- Store each word in the array
- End array with NULL
*/
