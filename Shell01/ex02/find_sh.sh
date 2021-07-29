#!/bin/bash
find . -type f -name '*.sh' | awk '{gsub(".*/","")gsub("\.sh","");print}'