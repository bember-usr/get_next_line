# **42cursus' get_next_line**

*__Development repo for 42cursus' get_next_line project__*

For further information about 42cursus and its projects, please refer to [42cursus](https://github.com/appinha/42cursus) repo.

# `🗣️ About`
> _The aim of this project is to make you code a function that returns a line ending with a newline, read from a file descriptor._

For detailed information, refer to the [subject](https://github.com/appinha/42cursus/tree/master/_PDFs) of this project.

`🚀 TLDR`: this project consists of coding a function that returns one line at a time from a text file.

*Functions in get_next_line.c*

`ft_free_null` - free and null a pointer.
`ft_cpy_exc_buff` - copy read excess (string after \n) to static variable (buffer).
`ft_buff2line` - copy read line from buffer.
`get_next_line` - main function.

*Functions in get_next_line_utils.c*

`ft_strlen` - find length of string.
`ft_strdup` - save a copy of a string (with malloc).

# `🛠️ Usage`

### **Requirements**
The function is written in C language and thus needs the gcc compiler and some standard C libraries to run.

### **Instructions**
1. Using it in your code

To use the function in your code, simply include its header:

```
#include "get_next_line.h"
```
and, when compiling your code, add the source files and the required flag:

```
get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=<size>
```
If you're on Linux, you may as well need the following flags:

```
-D ARG_MAX="sysconf(_SC_ARG_MAX)" -D OPEN_MAX=1024
```
### **📋 Testing**
  + Configuring
     + First, open the Makefile inside /testing/ and configure the path to the get_next_line folder:
```
GNL_FOLDER	= ../get_next_line
``` 

   + Running:

For basic testing, run:

```
make
```
