ifconfig | grep 'ether ' | cut -f2 | sed 's/ether //g' | tr -d ' '
