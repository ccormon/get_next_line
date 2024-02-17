/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:17:50 by ccormon           #+#    #+#             */
/*   Updated: 2023/11/17 17:38:11 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# ifndef FD_MAX
#  define FD_MAX 1024
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
# include <fcntl.h>

char	*get_next_line(int fd);
int		ft_strchr(char *readed, int c);
size_t	ft_strlen(char *s);
void	addtoreaded(char **readed, char *buffer);
char	*addtoline(char *readed);
void	cleanreaded(char **readed);

#endif
