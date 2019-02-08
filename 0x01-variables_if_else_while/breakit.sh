#!/bin/bash
read -r -p "File name: " file
betty $file
gcc -Wall -Werror -Wextra -pedantic $file -o $(echo $file | cut -d. -f1)
