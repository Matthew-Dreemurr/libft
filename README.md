# libft
First project of School 19.

## Part 1
Fonctions de la libc.

### Check before push
- [x] atoi
- [x] bzero
- [x] calloc
- [x] isalnum
- [x] isalpha
- [x] isascii
- [x] isdigit
- [x] isprint
- [x] memccpy
- [x] memchr
- [x] memcmp
- [x] memcpy
- [x] memmove
- [x] memset
- [x] strchr
- [x] strdup
- [x] strlcat
- [x] strlcpy
- [x] strlen
- [x] strncmp
- [x] strnstr
- [x] strrchr
- [x] tolower
- [x] toupper

- [ ] libft.h

## Part 2
Fonctions supplémentaires.

### Check before push
- [ ] ft_itoa
- [ ] ft_putchar_fd
- [ ] ft_putendl_fd
- [ ] ft_putnbr_fd
- [ ] ft_putstr_fd
- [ ] ft_split
- [ ] ft_strjoin
- [ ] ft_strmapi
- [ ] ft_strtrim
- [ ] ft_substr

### Last Log test

```makefile
--------------------------------------------------------------------------------------------
|                                     CHECKING FILES                                       |
--------------------------------------------------------------------------------------------
Makefile      -Wall     -Wextra   -Werror
found         ok        ok        ok

Header file   Norme
found         ok

--------------------------------------------------------------------------------------------
|                                    COMPILING LIBFT                                       |
--------------------------------------------------------------------------------------------
rule all        rule $(NAME)     rule clean       rule fclean     make re         libft.a
found           not found        found            found           ok              found

--------------------------------------------------------------------------------------------
|                                     STARTING TESTS                                       |
--------------------------------------------------------------------------------------------

Part1 functions

FUNCTION              NORME          COMPIL.     FORBIDDEN FUNC.  TESTS               RESULT
ft_atoi               ok             success     clean            ✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓ OK
ft_bzero              ok             success     clean            ✓✓                  OK
ft_calloc             ok             success     clean            ✓                   OK
ft_isalnum            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_isalpha            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_isascii            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_isdigit            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_isprint            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_memccpy            ok             success     clean            ✓✓✓✓                OK
ft_memchr             ok             success     clean            ✓✓✓✓✓✓              OK
ft_memcmp             ok             success     clean            ✓✓✓✓✓✓✓✓✓           OK
ft_memcpy             ok             success     clean            ✓✓✓                 OK
ft_memmove            ok             success     clean            ✓✓✓✓✓               OK
ft_memset             ok             success     clean            ✓✓✓✓                OK
ft_strchr             ok             success     clean            ✓✓✓✓✓✓              OK
ft_strdup             ok             success     clean            ✓                   OK
ft_strlcat            ok             success     clean            ✓✓✓✓✓✓✓✓✓           OK
ft_strlcpy            ok             success     clean            ✓✓✓✓✓               OK
ft_strlen             ok             success     clean            ✓✓✓✓✓✓              OK
ft_strncmp            ok             success     clean            ✓✓✓✓✓✓✓✓✓✓✓         OK
ft_strnstr            ok             success     clean            ✓✓✓✓✓✓✓✓✓✓          OK
ft_strrchr            ok             success     clean            ✓✓✓✓✓✓✓✓            OK
ft_tolower            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_toupper            ok             success     clean            ✓✓✓✓✓✓✓             OK

Total : 24/24

Part2 functions

FUNCTION              NORME          COMPIL.     FORBIDDEN FUNC.  TESTS               RESULT
ft_itoa               NTI            NTI         NTI              NTI                 NTI
ft_putchar_fd         NTI            NTI         NTI              NTI                 NTI
ft_putendl_fd         NTI            NTI         NTI              NTI                 NTI
ft_putnbr_fd          NTI            NTI         NTI              NTI                 NTI
ft_putstr_fd          NTI            NTI         NTI              NTI                 NTI
ft_split              NTI            NTI         NTI              NTI                 NTI
ft_strjoin            NTI            NTI         NTI              NTI                 NTI
ft_strmapi            NTI            NTI         NTI              NTI                 NTI
ft_strtrim            NTI            NTI         NTI              NTI                 NTI
ft_substr             NTI            NTI         NTI              NTI                 NTI

Total : 0/10

Bonus functions

FUNCTION              NORME          COMPIL.     FORBIDDEN FUNC.  TESTS               RESULT
ft_lstadd_back        NTI            NTI         NTI              NTI                 NTI
ft_lstadd_front       NTI            NTI         NTI              NTI                 NTI
ft_lstclear           NTI            NTI         NTI              NTI                 NTI
ft_lstdelone          NTI            NTI         NTI              NTI                 NTI
ft_lstiter            NTI            NTI         NTI              NTI                 NTI
ft_lstlast            NTI            NTI         NTI              NTI                 NTI
ft_lstmap             NTI            NTI         NTI              NTI                 NTI
ft_lstnew             NTI            NTI         NTI              NTI                 NTI
ft_lstsize            NTI            NTI         NTI              NTI                 NTI

Total : 0/9
Abort : A Bus error : B Segmentation fault : S Timeout : T Nothing turned in : NTI
```
```
ft_memset:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_bzero:      [OK] [OK] [OK] [OK] 
ft_memcpy:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_memccpy:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_memmove:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_memchr:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_memcmp:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strlen:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_isalpha:    [OK] 
ft_isdigit:    [OK] 
ft_isalnum:    [OK] 
ft_isascii:    [OK] 
ft_isprint:    [OK] 
ft_toupper:    [OK] 
ft_tolower:    [OK] 
ft_strchr:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strrchr:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strncmp:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strlcpy:    [OK] [OK] [OK] [OK] [OK] [OK] {not protected}
ft_strlcat:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strnstr:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_atoi:       [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_calloc:     [OK] [OK] [OK] [OK] [OK] 
ft_strdup:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_substr:     [MISSING]
ft_strjoin:    [MISSING]
ft_strtrim:    [MISSING]
ft_split:      [MISSING]
ft_itoa:       [MISSING]
ft_strmapi:    [MISSING]
ft_putchar_fd: [OK] [OK] 
ft_putstr_fd:  [OK] [OK] {not protected}
ft_putendl_fd: [MISSING]
ft_putnbr_fd:  [MISSING]
ft_lstnew:     [MISSING]
ft_lstadd_front: [MISSING]
ft_lstsize:    [MISSING]
ft_lstlast:    [MISSING]
ft_lstadd_back:[MISSING]
ft_lstdelone:  [MISSING]
ft_lstclear:   [MISSING]
ft_lstiter:    [MISSING]
ft_lstmap:     [MISSING]
```
