/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 18:58:03 by orazafin          #+#    #+#             */
/*   Updated: 2016/11/28 13:42:34 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static long ft_pow(long n, int pow)
{
    long result;

    result = 1;
    while (pow--)
        result *= n;
    return (result);
}

static int ft_abs(int n)
{
    if (n < 0)
        return (0 - n);
    return (n);
}

void b(int c, int n, int neg, char **num)
{
    while (c-- >= neg)
    {
        (*num)[c] = (ft_abs(n % 10)) + '0';
        n /= 10;
    }
}

void    is_neg_negative(int neg, char **num, int size)
{
    if (neg)
        (*num)[size] = '-';
}

void    lol(char **num, int *size)
{
    *num = (char *) malloc(*size + 1);
    (*num)[*size] = '\0';
    size--;
}

static int ft_setnum(char **num, int size, int n, int neg) {
    lol(num, &size);
    b(size, n, neg, num);
    is_neg_negative(neg, num, size);
    return (0);
}

int fonction(int n, int mul, int *neg) {
    while ((int) ((long) n / ft_pow(10, mul)))
        mul++;
    if (n < 0)
        *neg = 1;
    return mul;
}

int    how_many_number(int n, int *neg)
{
    int mul;

    mul = 0;
    return (fonction(n, mul, neg));
}

char *ft_itoa(int n) {
    int neg;
    char *num;

    neg = 0;
    ft_setnum(&num, how_many_number(n, &neg + neg), n, neg);
    return ((n == 0)? "0\0" : num);
}

int main(void)
{
//    printf("res n*1= %s\n", itoa(31));
    for (int i = -100; i < 100; ++i) {
        printf("res n*2= %s\n", ft_itoa(i));
    }
