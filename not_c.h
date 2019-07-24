/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_c.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 19:58:35 by tsehr             #+#    #+#             */
/*   Updated: 2019/07/18 18:29:57 by tsehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOT_C_H
# define NOT_C_H


# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdbool.h>

typedef struct Types {
   int integer;
   char *string;
   bool boolean;
} var;

# define LAMBDA(c_) ({ c_ _;})

# define REQUIRE(x, y) if (!x) return (y);







#endif
