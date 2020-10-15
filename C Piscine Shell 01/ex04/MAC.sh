ifconfig | grep '\tether' | sed 's/ether//g' | sed 's/[[:space:]]//g'
