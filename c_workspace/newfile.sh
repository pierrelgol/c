#!/bin/bash

# Get the last chapter and exercise number from existing files
last_chapter=$(ls | grep -E "^prog[0-9]{2}[0-9]*.c$" | sed 's/^prog\([0-9]\{2\}\)[0-9]*.c$/\1/' | sort -n | tail -n 1)
last_exercise=$(ls | grep -E "^prog${last_chapter}[0-9]{2}.c$" | sed "s/^prog${last_chapter}\([0-9]\{2\}\).c$/\1/" | sort -n | tail -n 1)

# Prompt the user for the number of new files to create
echo "How many new files do you want to create?"
read num_files

# Loop through and create the new files
for i in $(seq 1 $num_files); do
  next_exercise=$(echo $((last_exercise + i)))
  printf -v file_num "%02d" $next_exercise
  filename="prog${last_chapter}${file_num}.c"
  touch $filename
done

echo "$num_files new files created."

