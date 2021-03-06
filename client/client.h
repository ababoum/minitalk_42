/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <mababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 19:16:29 by mababou           #+#    #+#             */
/*   Updated: 2022/05/03 17:44:18 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
# define CLIENT_H

# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

# define RED_TXT	"\e[31;1m"
# define GREEN_TXT	"\e[32;1m"
# define RESET_TXT	"\e[0m"

# define END_CHAR	127

void	exit_error(char *message);
size_t	ft_strlen(char *str);
void	ft_putstr(int fd, char *str);
int		ft_atoi(const char *str);

#endif