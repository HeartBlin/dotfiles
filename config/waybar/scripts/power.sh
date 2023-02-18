#!/bin/sh

printf "Select a option:\n"
printf "  [1] Log Out\n"
printf "  [2] Sleep\n"
printf "  [3] Hibernate\n"
printf "  [4] Shutdown\n"
printf "  [5] Restart\n"
printf "  [*] Exit\n"
while true; do
    read -p "> " cond
    case $cond in
        1 ) printf "Logging out..."; sleep 0.5; hyprctl dispatch exit 0; break;;
        2 ) printf "Entering sleep..."; sleep 0.5; systemctl suspend; break;;
        3 ) printf "Entering hibernation..."; sleep 0.5; systemctl hibernate; break;;
	    4 ) printf "Shutting down..."; sleep 0.5; systemctl poweroff; break;;
	    5 ) printf "Restarting..."; sleep 0.5; systemctl reboot; break;;
        * ) printf "Quitting..."; break;;
    esac
done
