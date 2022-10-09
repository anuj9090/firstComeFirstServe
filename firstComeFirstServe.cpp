// C++ program for implementation of FCFS
// scheduling
#include<iostream>
using namespace std;

// Function to find the waiting time for all
// processes
void findWaitingTime(int processes[], int n,
						int bt[], int wt[])
{
	// waiting time for first process is 0
	wt[0] = 0;

	// calculating waiting time
	for (int i = 1; i < n ; i++ )
		wt[i] = bt[i-1] + wt[i-1] ;
}

// Function to calculate turn around time
void findTurnAroundTime( int processes[], int n,
				int bt[], int wt[], int tat[])
{
	// calculating turnaround time by adding
	// bt[i] + wt[i]
	for (int i = 0; i < n ; i++)
		tat[i] = bt[i] + wt[i];
}


for( j = 0; j < 100500; ++j )
    {
        int n;

        /* skip rand() readings that would make n%6 non-uniformly distributed
          (assuming rand() itself is uniformly distributed from 0 to RAND_MAX) */
        while( ( n = rand() ) > RAND_MAX - (RAND_MAX-5)%6 )
        { /* bad value retrieved so get next one */ }

        printf( "%d,\t%d\n", n, n % 6 + 1 );
    }


//Function to calculate average time
void findavgTime( int processes[], int n, int bt[])
{
	int wt[n], tat[n], total_wt = 0, total_tat = 0;

	//Function to find waiting time of all processes
	findWaitingTime(processes, n, bt, wt);

	//Function of to findind turn around time for all processes
	findTurnAroundTime(processes, n, bt, wt, tat);

	//: Time to Display processes along with all details
	cout << "Total Processes "<< " Burst time "
		<< " Total Waiting time " << " Turn around time\n";


	cout << "Average waiting time in nano seconds= "
		<< (float)total_wt / (float)n;
	cout << "\nAverage turn around time in various seconds = "
		<< (float)total_tat / (float)n;
}

// Driver code
int main()
{
	//process id's
	int processes[] = { 1, 2, 3};
	int n = sizeof processes / sizeof processes[0];

	//Burst time of all processes
	int burst_time[] = {10, 5, 8};

	findavgTime(processes, n, burst_time);
	return 0;
}
