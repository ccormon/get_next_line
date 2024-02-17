/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:16:09 by ccormon           #+#    #+#             */
/*   Updated: 2023/11/17 17:36:46 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

ssize_t	readline(ssize_t byte_read, char *buffer, char **readed, int fd)
{
	byte_read = read(fd, buffer, BUFFER_SIZE);
	if (byte_read <= 0)
		return (byte_read);
	buffer[byte_read] = '\0';
	addtoreaded(&(readed[fd]), buffer);
	return (byte_read);
}

char	*get_next_line(int fd)
{
	static char	*readed[FD_MAX];
	char		*buffer;
	char		*line;
	ssize_t		byte_read;

	if (fd < 0 || fd >= FD_MAX)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	byte_read = BUFFER_SIZE;
	while (byte_read == BUFFER_SIZE && !ft_strchr(readed[fd], '\n'))
		byte_read = readline(byte_read, buffer, readed, fd);
	free(buffer);
	if (byte_read == -1)
	{
		free(readed[fd]);
		readed[fd] = NULL;
		return (NULL);
	}
	if (!(readed[fd]))
		return (NULL);
	line = addtoline(readed[fd]);
	cleanreaded(&(readed[fd]));
	return (line);
}

/* int	main(int argc, char **argv)
{
	char	*line;
	int		fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (1)
		{
			line = get_next_line(fd);
			if (!line)
				break ;
			printf("%s", line);
		}
		close(fd);
	}
	return (0);
}
 */
