#!/bin/bash

# This is a useful function for evaluating expressions. expr & let can only can compute integers.

# Main
for i in $(seq 1 99); do
    if [[ $[ $i + 1 ] % 2 -eq 0 ]]; then
        echo $i >$(tty)
    fi
done
