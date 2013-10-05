# build an executable named myprog from aa.out
all: unhappy.cpp
	echo 'I hope you used the -j flag to indicated numer of jobs, or -j without argument for infinate jobs'
	g++ -pthread -g -std=c++11 -o aa.out unhappy.cpp && echo 'run like ./aa.out < unhappy.judge > myout.solution'
 
clean:
	$(RM) aa.out
  
