#!/bin/bash
data=system_testing/test-data
file1=system_testing/test
file2=system_testing/test-output

echo "******* BEGINNING TEST *******"

cd ..
make qsolver

cat ${data} | ./qsolver > ${file1}

if cmp -s ${file1} ${file2}; then
	echo "*******************************"
	echo "SUCCESS | The test cases match."
	echo "*******************************"
else
	echo "*******************************"
	echo "FAILURE | The test cases don't match."
	echo "*******************************"
fi

make clean
rm ${file1}

echo "********* ENDING TEST *********"