#!/bin/bash

# Navigate to the current directory
cd "$(dirname "${BASH_SOURCE[0]}")"

# Add all folders to the Git staging area
git add .

# Prompt the user for a commit message
echo "Enter a commit message:"
read commit_message

# Commit the changes with the user-provided message
git commit -m "$commit_message"

# Push the changes to the remote repository
git push

