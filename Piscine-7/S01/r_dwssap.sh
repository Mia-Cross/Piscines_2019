sed -e "1,10d" /etc/passwd | sed -n "n;p" | cut -d':' -f1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ' ' |sed -e "s/ /, /g" | sed 's/, $/./' | tr -d '\n'
