#!/bin/sh
ifconfig -a link | grep ether | cut -c 8-24
