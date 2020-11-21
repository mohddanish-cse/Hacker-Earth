#include <iostream>
using namespace std;
 
int main() {
	int t,n;
	int cost1,cost2;
	int p1 = 0,p2 =0;
	int total =0;
	cin >> t;
	while (t--) {
		p1=0;
		p2=0;
		cin>> cost1 >> cost2;
		cin >> n;
		int ar[n][2];
 
		for (int i=0;i<n;i++) {
			for (int j=0;j<=1;j++)
				cin >> ar[i][j];
		}
    
//Find no. of correct answers
		for (int i=0;i<n;i++) {
			if(ar[i][0]==1)
				p1++;
			if(ar[i][1]==1)
				p2++;
		}
//Calculate minimum cost
		if (cost1>cost2) {
			if (p1<p2)
				total = cost1*p1 + cost2*p2;
			else
				total = cost1*p2 + cost2*p1;
		}
		else {
			if (p1<p2)
				total = cost1*p2 + cost2*p1;				
			else
				total = cost1*p1 + cost2*p2;
		}
		cout<<total<<endl;
	}
	return 0;
}
Language: C++
