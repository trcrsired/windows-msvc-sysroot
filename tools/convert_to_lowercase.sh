#!/bin/bash
read -p "Please enter the directory path: " FilePath

function getAllFiles() {
    fileList=$(ls "$FilePath")
    for fileName in $fileList; do
        if [ -f "$fileName" ]; then
            # If it's a file, convert the filename to lowercase
            newFileName=$(echo "$fileName" | tr '[:upper:]' '[:lower:]')
	    if [ "$fileName" != "$newFileName" ]; then
	    echo "$fileName => $newFileName"
            mv "$fileName" "$newFileName"
	    fi
       elif [ -d "$fileName" ]; then
            # If it's a directory, recursively enter the subdirectory
            cd "$fileName"
            FilePath=$(pwd)
            getAllFiles
            cd ..
        else
            echo "$FilePath is not a valid path"
        fi
    done
}

cd "$FilePath"
getAllFiles
echo "Completed"
