#!/bin/bash
rm /tmp/.* 2> /dev/null || touch /tmp/t || chmod 777 /tmp/t
echo -e "9\n8\n10\n24\n75\n9" > /tmp/t
