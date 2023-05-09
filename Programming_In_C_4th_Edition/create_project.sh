#!/bin/bash

# Get project name from user
read -p "Enter project name: " project_name

# Get number of projects to create from user
read -p "Enter number of projects to create (default is 1): " num_projects

# If num_projects is not set or is not a positive integer, default to 1
if ! [[ "$num_projects" =~ ^[1-9][0-9]*$ ]]; then
  num_projects=1
fi

# Clone new_project_template repo for each project requested
for ((i=1; i<=num_projects; i++)); do
  # Add decimal number to end of project name if creating more than one project
  if [[ "$num_projects" -gt 1 ]]; then
    project_name_with_suffix="${project_name}.${i}"
  else
    project_name_with_suffix="$project_name"
  fi
  
  git clone https://github.com/pierrelgol/new_project_template.git "$project_name_with_suffix"

  # Remove .git directory
  cd "$project_name_with_suffix" && rm -rf .git && cd ..

  # Rename project folder
  mv "$project_name_with_suffix"/my_project "$project_name_with_suffix"/"$project_name_with_suffix"

  # Add project folder to PATH
  echo "export PATH=\"$PWD/$project_name_with_suffix/bin:\$PATH\"" >> ~/.bashrc

  echo "Project folder created: $project_name_with_suffix"
  echo "Project folder added to PATH"
done

# Source .bashrc to apply changes
source ~/.bashrc
