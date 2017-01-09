#!/bin/sh
ifconfig -a | grep "ether" | sed "s/. *//" | cut -d " " -f2
