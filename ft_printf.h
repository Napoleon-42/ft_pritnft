/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 03:42:34 by napoleon          #+#    #+#             */
/*   Updated: 2020/05/05 01:04:27 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

typedef	struct	progression
{
	char	arg_type;
	char	reverse;
	char	zero;
	int		arg_size;
	int		minimal_size;
	int		precision;
}				t_arg;

#define ARG_TYPE buffer->arg_type
#define REVERSE	buffer->reverse
#define ZERO_KEY buffer->zero
#define ARG_SIZE buffer->arg_size
#define WIDTH buffer->minimal_size
#define PRECISION buffer->precision


#endif