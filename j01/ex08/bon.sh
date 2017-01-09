#!/bin/sh
ldapsearch  "sn=*bon*" cn | grep -c ^cn
