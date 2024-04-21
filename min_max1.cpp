#include <iostream>
#include <string>
using namespace std;

class name {
		static const int n=6;
		string arr[n],nw="b";
		int match_played[n];
		int *mergeRuns=new int[n];
		int hScore[n];
		int LScore[n];
		int runs[n];
		int max,min;



		int matchplayed;
	public:
		void fun1() {

			for(int i=0; i<2; i++) {

				cout<<"Enter the role::";
				cin>>arr[i];

				cout << "Enter the player's Match Played " << i + 1 << ": ";
				cin >> match_played[i] ;

				matchplayed=match_played[i] ;

				if(arr[i]==nw) {
					cout<<"Eneter the runs"<<endl;

					for(int i=0; i<matchplayed; i++) {
						cin>>runs[i];
					}


					for(int i=0; i<matchplayed; i++) {
						mergeRuns[i]=runs[i];
					}

					fun();
				} else {
					cout<<"Wrong data insert";
				}
//				cout<<"Enter the name";
//				cin>>name;
//				cout<<"Enter the name";
//				cin>>name;
//				fun();
//				cout<<"Enter the name";
//				cin>>name;
//				cout<<name<<endl;

			}
		}
		void fun() {
			cout<<"\nMerge array data"<<endl;

			max=mergeRuns[0];
			min=mergeRuns[0];
			for(int i=0; i<matchplayed; i++) {
				if(max<mergeRuns[i])
					max=mergeRuns[i];
				else if(min>mergeRuns[i])
					min=mergeRuns[i];

			}

          cout<<"hscore and LScore";
          int len=sizeof(hScore)/sizeof(hScore[0]);
          
			for (int i = 0; i < len; ++i) {
			 	hScore [i]=max;
			    LScore[i]=min;
			}
				for (int i = 0; i < len; ++i) {
			   cout<<"high\n"<<hScore [i]<<endl;
			    cout<<"Scoore\n"<<LScore[i]<<endl;
			}		
//			delete[] myArray;
//			myArray = nullptr;

		

			cout<<"\nMaximum element of Array: "<<max;
			cout<<"\nMinimum element of Array: "<<min;

		}





};


int main() {

	name n1;
	n1.fun1();




	return 0;
}
