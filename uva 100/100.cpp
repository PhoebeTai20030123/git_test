#include <iostream>
using namespace std;
int main(){
	int i,j;
	while(cin>>i>>j){
		int a=i;
		int b=j;
		if (i>j){a=j; b=i;}       //��j�p
		int start = a;                      //��lstart�qi�}�l��
		int max_num = 1;                    //max_num�O��J�g�L���̤j������
		while(start<=b){
			int count = 1;                 //count�O�p��i��j�����C�@�Ӹg�L�X�����Ʀr
			int k = start;                 //k�O��j�p���@��
			while (k!=1){
				if (k%2!=0){
					k = 3*k+1;
				}
				else{
					k = k/2;
				};
				count++;
			}
			if (count>max_num){
				max_num=count;
			}
			start++;
		}
		cout<<i<<" "<<j<<" "<<max_num<<endl;
	}
}


/*
#include <iostream>
#include <algorithm>
using namespace std;

int main (void){
	int i,j;
	while(cin >> i >> j ) {
		int maxNum = 0;
		int startNum = min(i,j);
		int endNum = max(i,j);
		while (startNum <= endNum){
			int n = startNum;
			int count = 1;
			while(n != 1){
				if( n % 2 != 0 ){
					n = n * 3 + 1;
				}
				else{
					n = n / 2;
				}
				count++;
			}
			if (count > maxNum){
				maxNum = count;
			}
			startNum++;
		}
		cout << i <<" "<< j << " "<< maxNum <<endl;
	}

	return 0;
}
*/
