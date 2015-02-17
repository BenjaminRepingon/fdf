/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/28 16:27:32 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 11:44:49 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <math.h>

typedef enum		e_color
{
	RESET = 0,
	BLACK,
	RED,
	GREEN,
	YELLOW,
	BLUE,
	MAGENTA,
	CYAN,
	WHITE,
	B_BLACK,
	B_RED,
	B_GREEN,
	B_YELLOW,
	B_BLUE,
	B_MAGENTA,
	B_CYAN,
	B_WHITE
}					t_color;

typedef struct		s_pattern
{
	char			*str;
}					t_pattern;

typedef struct		s_elem
{
	struct s_elem	*next;
	void			*data;
}					t_elem;

typedef struct		s_list
{
	int				size;
	t_elem			*first;
	t_elem			*last;
}					t_list;

typedef char		t_bool;

/*
**	ANSI COLOR
*/
# define ANSI_COLOR_BLACK				("\x1b[30m")
# define ANSI_COLOR_RED					("\x1b[31m")
# define ANSI_COLOR_GREEN				("\x1b[32m")
# define ANSI_COLOR_YELLOW				("\x1b[33m")
# define ANSI_COLOR_BLUE				("\x1b[34m")
# define ANSI_COLOR_MAGENTA				("\x1b[35m")
# define ANSI_COLOR_CYAN				("\x1b[36m")
# define ANSI_COLOR_WHITE				("\x1b[36m")
# define ANSI_BACKGROUND_COLOR_BLACK	("\x1b[40m")
# define ANSI_BACKGROUND_COLOR_RED		("\x1b[41m")
# define ANSI_BACKGROUND_COLOR_GREEN	("\x1b[42m")
# define ANSI_BACKGROUND_COLOR_YELLOW	("\x1b[43m")
# define ANSI_BACKGROUND_COLOR_BLUE		("\x1b[44m")
# define ANSI_BACKGROUND_COLOR_MAGENTA	("\x1b[45m")
# define ANSI_BACKGROUND_COLOR_CYAN		("\x1b[46m")
# define ANSI_BACKGROUND_COLOR_WITHE	("\x1b[47m")
# define ANSI_COLOR_RESET				("\x1b[0m")

/*
**	BASE
*/
# define BINARY							(2)
# define TRINARY						(3)
# define OCTAL							(8)
# define NONAIRE						(9)
# define DECIMAL						(10)
# define HEXADECIMAL					(16)
# define SEXIGESIMAL					(60)

/*
**	ALIAS
*/
# define MIN(n, m)						((n) < (m) ? (n) : (m))
# define EQUAL(n, m)					(!ft_strcmp(n, m))
# define Vec2							t_vector2f
# define Vec3							t_vector3f
# define Mat4							t_matrix4f
# define Quat							t_quaternion
# define bool							t_bool

/*
**	PUT
*/
void		ft_putstr(char *str);
void		ft_putstr_fd(char *str, size_t fd);
void		ft_putendl(char *str);
void		ft_putendl_fd(char *str, size_t fd);
void		ft_putchar(char c);
void		ft_putchar_fd(char c, size_t fd);
void		ft_putmem(void *adr);
void		ft_putmem_fd(void *adr, size_t fd);
void		ft_putnbr_base(int n, size_t base);
void		ft_putnbr_base_fd(int n, size_t base, size_t fd);

/*
**	STR
*/
char		*ft_strchr(const char *s, int c);
char		*ft_strstr(const char *str, const char *find);
char		*ft_strncpy(char *dest, const char *src, size_t n);
size_t		ft_strlen(char *str);
int			ft_strcmp(char *str1, char *str2);
int			ft_strncmp(char *s1, char *s2, size_t n);
void		ft_colorize(t_color color, int backgroud);
char		*ft_strjoin_malloced(char *str1, char *str2);
char		*ft_strjoin(char *str1, char *str2);
char		*ft_strdup(char *str);
char		*ft_strsub(char const *s, size_t start, size_t len);
char		**ft_strsplit(char const *s, char c);
char		*ft_trunc(const char *msg, ...);
t_pattern	pattern(int repeat, const char *msg, ...);

/*
**	TAB
*/
size_t		ft_tabsize(void **tab);
void		ft_freetab(void **tab);
char		**ft_cpytab(char **tab, int lenth);
int			**ft_cpytab_int(int **tab, int x, int y);

/*
**	IS
*/
bool		ft_isalnum(int c);
bool		ft_islower(int c);
bool		ft_isupper(int c);
bool		ft_isalpha(int c);
bool		ft_isascii(int c);
bool		ft_isdigit(int c);
bool		ft_isprint(int c);
bool		ft_isspace(char c);

/*
**	CONVERT
*/
char		*ft_itoa(int n);
int			ft_atoi(const char *str);

/*
**	MEM
*/
void		*ft_memalloc(size_t size);
void		*ft_memrealloc(void **ptr, size_t size, size_t new_size);
char		*ft_strnew(size_t size);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		ft_memdel(void **mem);

/*
**	ERROR
*/
int			error(const char *msg, ...);
void		exit_error(char *error);

/*
**	LIST
*/
t_list		*new_list();
t_elem		*add_elem( t_list *list, void *data );

/*
**	UTILS
*/
int			get_next_line(int fd, char **line);
void		add_char(char **res, char c);
void		add_str(char **res, char *str);
void		add_int(char **res, int i);
void		add_pattern(char **res, t_pattern pat);

// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

typedef struct	s_vector2f
{
	float		x;
	float		y;
}				Vec2;

typedef struct	s_vector3f
{
	float		x;
	float		y;
	float		z;
}				t_vector3f;

typedef struct	s_quaternion
{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_quaternion;

typedef struct	s_matrix4f
{
	float		m[4][4];
}				t_matrix4f;

/*
**	vector2f
*/
Vec2			*new_vector2f(float x, float y);
float			length2(Vec2 *vec);
float			dot2(Vec2 *vec1, Vec2 *vec2);
float			cross2(Vec2 *vec1, Vec2 *vec2);
Vec2			*normalized2(Vec2 *vec);
Vec2			*inv2(Vec2 *vec);
Vec2			*add2v(Vec2 *vec1, Vec2 *vec2);
Vec2			*sub2v(Vec2 *vec1, Vec2 *vec2);
Vec2			*mul2v(Vec2 *vec1, Vec2 *vec2);
Vec2			*div2v(Vec2 *vec1, Vec2 *vec2);
Vec2			*add2f(Vec2 *vec1, float value);
Vec2			*sub2f(Vec2 *vec1, float value);
Vec2			*mul2f(Vec2 *vec1, float value);
Vec2			*div2f(Vec2 *vec1, float value);
Vec2			*pow2f(Vec2 *vec1, float value);
Vec2			*rt2(Vec2 *vec1);
Vec2			*rotate2(Vec2 *vec, float angle);
float			get_value2(Vec2 *vec);

/*
**	vector3f
*/
Vec3			*new_vector3f(float x, float y, float z);
float			length3(Vec3 *vec);
float			dot3(Vec3 *vec1, Vec3 *vec2);
Vec3			*cross3(Vec3 *vec1, Vec3 *vec2);
Vec3			*normalized3(Vec3 *vec);
Vec3			*inv3(Vec3 *vec);
Vec3			*add3v(Vec3 *vec1, Vec3 *vec2);
Vec3			*sub3v(Vec3 *vec1, Vec3 *vec2);
Vec3			*mul3v(Vec3 *vec1, Vec3 *vec2);
Vec3			*div3v(Vec3 *vec1, Vec3 *vec2);
Vec3			*add3f(Vec3 *vec1, float value);
Vec3			*sub3f(Vec3 *vec1, float value);
Vec3			*mul3f(Vec3 *vec1, float value);
Vec3			*div3f(Vec3 *vec1, float value);
Vec3			*pow3f(Vec3 *vec1, float value);
Vec3			*rt3(Vec3 *vec1);
Vec3			*rotate3(Vec3 *vec, Vec3 *axis, float angle);
Vec3			*rotate3q(Vec3 *vec, Quat *rotation);
float			get_value3(Vec3 *vec);

/*
**	matrix4f
*/
Mat4			*new_matrix4();
Mat4			*mul4m(Mat4 *m, Mat4 *r);
Mat4			*init_rotation3f(float x, float y, float z);
Mat4			*init_translation(Vec3 *vec);
Mat4			*init_rotation3v(Vec3 *f, Vec3 *u, Vec3 *r);
Mat4			*init_scale(float x, float y, float z);

/*
**	quaternion
*/
Quat			*new_quaternion4f(float x, float y, float z, float w);
Quat			*new_quaternion4vf(Vec3 *axis, float angle);
float			length4(Quat *q);
Quat			*normalized4(Quat *q);
Quat			*conjugate4(Quat *q);
Mat4			*to_rotation_matrix(Quat *q);
Quat			*mul4q(Quat *q, Quat *r);
Quat			*mul4v(Quat *q, Vec3 *r);

/*
**	transforms
*/
Vec3			*transform(Vec3 *v, Mat4 *m);
Vec3			*get_transforms(Vec3 *v, Vec3 *t, Quat *r);

/*
**	utils
*/
float			to_radians(float angle);
float			rt(float val);

#endif
