#!/usr/bin/env bash

CWD=$(pwd)

if [ "$1" = "-h" ]; then
	echo "This is the install script for Calcu. If you want to install Calcu, use the option -S. If you want to uninstall Calcu use -R."
	exit 0
fi

if [ ${EUID} -ne 0 ]; then
    echo "This script must be run as root. Cancelling" >&2
    exit 1
elif [ "$1" = "-S" ]; then
	gcc $CWD/calcu.c -o /usr/local/bin/calcu && echo "Installation finished" || echo "Installation failed"
	exit 0
elif [ "$1" = "-R" ]; then
	rm -f /usr/local/bin/calcu && echo "Uninstallation finished" || echo "Uninstallation failed"
	exit 0
else
	echo "No valid option specified"
fi
