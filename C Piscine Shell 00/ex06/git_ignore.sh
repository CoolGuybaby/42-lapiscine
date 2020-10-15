#!/bin/bash

# find . -exec git check-ignore {} + | xargs -n 1 basename

git ls-files --ignore --exclude-standard --others
