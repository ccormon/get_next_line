/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:04:24 by ccormon           #+#    #+#             */
/*   Updated: 2023/11/10 17:32:15 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
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
