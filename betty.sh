#!/bin/bash
shopt -s nullglob
files=( *.c )
if [ ${#files[@]} -eq 0 ]; then
echo "No .c files found"
else
for file in "${files[@]}"; do
betty "$file"
done
fi
