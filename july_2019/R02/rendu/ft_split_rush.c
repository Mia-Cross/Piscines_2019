/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_rush.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarabes <lmarabes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 23:21:42 by lmarabes          #+#    #+#             */
/*   Updated: 2019/07/21 23:21:48 by lmarabes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int        is_sep(char c, char *charset)
{
    int    j;

    j = 0;
    while (charset[j])
    {
        if (c == charset[j])
            return (1);
        ++j;
    }
    return (0);
}

int        check_word(char c, char prev, char *charset)
{
    return (!is_sep(c, charset) && is_sep(prev, charset));
}

int        word_count(char *str, char *charset)
{
    int    nb_words;
    int    i;

    i = 0;
    nb_words = 0;
    while (str[i] != '\0')
    {
        if (check_word(str[i], str[i - 1], charset) ||
            (!is_sep(str[i], charset) && i == 0))
            nb_words++;
        i++;
    }
    return (nb_words);
}

int *words_len(char *str, char *charset)
{
    int count;
    int i;
    int nb_words;
    int *words_size;

    i = 0;
    nb_words = word_count(str, charset);
    words_size = malloc(nb_words * sizeof(int));
    while (i <= nb_words)
    {
        words_size[i] = 0;
        i++;
    }
    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        if (!is_sep(str[i], charset))
            words_size[count]++;
        else if (i > 0 && !is_sep(str[i - 1], charset))
            count++;
        i++;
    }
    return (words_size);
}

char **ft_split(char *str, char *charset)
{
    char **tab;
    int k;
    int j;
    int count;
    int *words_size;

    charest = "\n";
    tab = malloc((word_count(str, charset) + 1) * sizeof(char*));
    words_size = words_len(str, charset);
    count = 0;
    j = 0;
    k = -1;
    while (str[++k] != '\0')
    {
        if (!is_sep(str[k], charset))
        {
            if (k == 0 || check_word(str[k], str[k - 1], charset))
            {
                tab[count] = malloc(words_size[count] * sizeof(char));
                tab[count][j] = str[k];
                tab[count][++j] = '\0';
            }
        }
        else if (k > 0 && !is_sep(str[k - 1], charset) && ++count)
            j = 0;
    }
    tab[word_count(str, charset)] = 0;
    return (tab);
}
