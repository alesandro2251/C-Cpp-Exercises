#include <stdio.h>
#include <windows.h>
#include <math.h>

struct threadinfo
{
	int index;
	HANDLE h;
	DWORD tid;
}; 
int globalv; 
int count = 0;

HANDLE mutex;

DWORD WINAPI threadFunc(void* p)
{
	struct threadinfo* p1 = (struct threadinfo*)p;
	printf("\nthread % d started", p1->index);

	for (int i = 0; i < 100000; ++i) {
		// Write index to global variable
		WaitForSingleObject(mutex, INFINITE);
		globalv = p1->index;

		// Inner dummy loop
		for (int j = 0; j < 1; ++j) {
			// Do nothing
		}

		// Check and increment count if globalv differs from index
		if (globalv != p1->index) {
			count++;
		}
		ReleaseMutex(mutex);
	}
	printf("\nthread % d terminated", p1->index);
	return 0;
}


int main() {

	int n;// number of threads from threadinfo
	printf("enter number of threads:  ");
	scanf_s("%d", &n);

	struct threadinfo* thread_arr = (struct threadinfo*)malloc(n * sizeof(struct threadinfo));

	mutex = CreateMutex(NULL, FALSE, NULL);

	for (int i = 0; i < n; i++)
	{
		thread_arr[i].index = i;
		thread_arr[i].h = CreateThread(NULL, 0, threadFunc, thread_arr + i, 0, &thread_arr[i].tid);
	}

	printf("\nmain thread terminated");
	scanf_s("%d", &n);
	printf("\ncount is :  %d", count);
	ExitThread(0);
	//return 0;
}
