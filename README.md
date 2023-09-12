# ft_printf

<p align="center">
  <img src="https://github.com/alissonmarcs/42-project-badges/blob/main/badges/ft_printfe.png" alt="printf 42 project badge"/>
</p>
<p align="center">Grade: 100/100</p>

`ft_printf` is a function that mimics the original standardard `printf`. So, a call like `ft_printf("my name is %s\n", "John")` will write `my name is John` in your terminal.

The following conversios are implemented:
- %c prints a single char
- %s prints a string
- %d prints a number in base 10
- %i prints a integer in base 10
- %u prints a unsigned number in base 10
- %x prints a number in hexadecimal lowercase format
- %X prints a number in hexadecimal upcase format
- %p prints a void pointer in hexadecimal lowercase format

## How to use

Clone this repository, then `cd` and `make` on it.

After that, include `ft_printf.h` in your `.c` and compile your `.c` with `libftprintf.a`:

```c
#include "ft_printf.h"

int main()
{
	ft_printf("my name is %s\n", "John");
}
```

```
cc main.c libftprintf.a
./a.out
```

```bash
my name is John
```
