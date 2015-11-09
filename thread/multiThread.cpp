#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;

#define NUM_THREADS 2

void* sayHello(void* args){
	cout<<"Hello"<<endl;
}


class Test{
	public:
		Test(void){};

		static void* count(void* args){
			int cnt = 0;
			cnt = 0;
			while(cnt<20){
				cout<<cnt<<endl;
				sleep(1);
				cnt++;
			}
		}

		static void* showOK(void* args){
			int cnt = 0;
			while(cnt<4){
				cout<<"OK"<<endl;
				sleep(5);
				cnt++;
			}
		}

	private:
		//int cnt;
};

int main(){
	pthread_t tids[NUM_THREADS];
/*	for(int i=0; i<NUM_THREADS; i++){
		int ret = pthread_create( &tids[i], NULL, sayHello, NULL);
		if(ret!=0) cout<<"pthread_create error:error_code=" << ret << endl;
	}
*/
	Test test;

	int ret = pthread_create( &tids[0], NULL, test.count, NULL);
	if(ret!=0) cout<<"pthread_create error:error_code=" << ret << endl;

	ret = pthread_create( &tids[1], NULL, test.showOK, NULL);
	if(ret!=0) cout<<"pthread_create error:error_code=" << ret << endl;


	pthread_exit(NULL);
	
	return 0;
}
