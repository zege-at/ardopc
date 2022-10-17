#
# Regular cron jobs for the ardopc package
#
0 4	* * *	root	[ -x /usr/bin/ardopc_maintenance ] && /usr/bin/ardopc_maintenance
