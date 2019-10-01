#!/bin/sh

make && ./paper
while true
do
  echo "TECHIO> open -s /project/target/ output.html"
  sleep 1
done
