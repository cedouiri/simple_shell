
# Simple Shell

## Description

**Simple Shell** is a UNIX command-line interpreter written in C.  
It mimics the behavior of the original `sh` shell, allowing users to execute commands, navigate the file system, and manage processes. The shell supports both **interactive** and **non-interactive** modes.

This project was developed as part of the Holberton School low-level programming curriculum.

## Features

- Execute commands with arguments
- Built-in commands: `exit`, `env`
- Command path resolution using `$PATH`
- Input parsing with `getline`
- Forking and executing with `fork`, `execve`, and `wait`
- Error handling and memory management
- Interactive and non-interactive modes

## How to Use

### Compilation

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

### Run the Shell

```
./hsh
```

### Example

```
$ ./hsh
$ ls -l
$ pwd
$ echo "Hello, Shell"
$ exit
```

## Files

| File          | Description                                 |
|---------------|---------------------------------------------|
| `main.c`      | Entry point of the shell                    |
| `shell.c`     | Core shell loop and command execution       |
| `parser.c`    | Tokenizes user input                        |
| `builtins.c`  | Handles built-in commands like `exit`, `env`|
| `utils.c`     | Helper functions                            |
| `memory.c`    | Memory allocation and freeing               |

## Requirements

- OS: Ubuntu 20.04 LTS
- GCC compiler

## Skills Learned

- C programming
- System calls: `fork`, `execve`, `wait`, `getline`
- Memory allocation
- Error handling
- UNIX process management

## Authors

- [Chamsseddine Douiri](https://github.com/cedouiri)
- [Sofien Hafdhi](https://github.com/hafdhisofien)

## License

This project is licensed under the MIT License.
