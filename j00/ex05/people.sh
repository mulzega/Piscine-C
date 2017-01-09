ldapsearch -x 'uid=z*' cn | grep -E ^cn | sed "s/cn: //" | sort -fr
