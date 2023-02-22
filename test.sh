#!/bin/bash

echo "How many time you want to test? "

read n
count=0
for i in $(seq 1 $n); do

	g++ -o main main.cpp
	g++ -o bruteforce bruteforce.cpp
	g++ -o generator generator.cpp

	./generator
	input_file=testcase.txt
	output1_file=output1.txt
	output2_file=output2.txt

	./main < $input_file > $output1_file
	./bruteforce < $input_file > $output2_file

	echo "-------- TESTCASE $i ---------"
	if diff output1.txt output2.txt > /dev/null ; then
	    echo "OK"
	    ((count++))
	else
	    echo "INPUT: "
	    cat "testcase.txt"
	    echo "MAIN:"
	    cat "output1.txt"
	    echo "BRUTEFORCE: "
	    cat "output2.txt"
	fi

done
rm $output1_file $output2_file
echo "------------END OF TESTCASE------------"
echo "AC/WA : $count/$((n-count))"