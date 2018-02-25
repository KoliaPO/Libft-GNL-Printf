/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:04:16 by myprosku          #+#    #+#             */
/*   Updated: 2018/02/02 15:03:01 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1
# include <stdlib.h>
# include <fcntl.h>
# include "../libft/libft.h"

int		get_next_line(const int fd, char **line);

#endif
