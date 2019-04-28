#!/bin/bash
LOG_FILE=/var/log/Hello_word.log

my_echo(){
    now=`date +"%F %T"`
    echo "$now : $1" >> $LOG_FILE
    sync
}

my_echo "Hello word!"
