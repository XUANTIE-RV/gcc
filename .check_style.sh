#!/bin/sh
git diff --staged | contrib/check_GNU_style.sh - |  tee output.txt
if [[ `cat output.txt | wc -l` -gt 0 ]];then
    exit 1
fi
