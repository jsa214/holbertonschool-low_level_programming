#!/bin/bash
read -r -p 'Commit message: ' msg # prompt user for commit message
git add *                         # track all files
git add -u                        # track deletes
git commit -m "$msg"              # commit with message
git push                          # push