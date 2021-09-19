#!/usr/bin/env bash

CWD=$(pwd)

if [ ${EUID} -ne 0 ]; then
    echo "This script must be run as root. Cancelling" >&2
    exit 1
else
	gcc $CWD/calcu.c -o /usr/local/bin/calcu && echo "Installation finished" || echo "Installation failed"
fi


