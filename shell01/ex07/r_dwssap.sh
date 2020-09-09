#!/bin/bash
cat /etc/passwd | sed -e '/#/d' | awk 'NR%2==0'| sed 's/:.*//g' | rev | sort -r | sed -n -e "${FT_LINE1},${FT_LINE2}p" | tr '\n' ' ' | sed 's/ /, /g' | sed 's/, $/./' | tr -d '\n'
