/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_c.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 19:58:35 by tsehr             #+#    #+#             */
/*   Updated: 2019/07/24 19:32:32 by tsehr            ###   ########.fr       */
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
   char type;
   void *value;
   var *next;
} var;

// typedef struct ArrayTypes {
//    char type;
//    void *value;
//    var *next;
// } array_var;

# define LAMBDA(c_) ({ c_ _;})

char *build_var_errors = {
   "variable build succeeded",
   "build() has failed with null or invalid params in Types.c"   
};

# define REQUIRE(x, y) if (!x) return (y);






#endif
