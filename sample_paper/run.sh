#!/bin/sh

make && ./paper
for (( ; ; ))
do
  echo "TECHIO> open -s /project/target/ output.html"
  sleep 1
done
