#include <iostream>
using namespace std;
int main(){
	char look[114], key[11] = {'\0'};
	int out = 0, line, keyend, lookend;
	while(1 == 1){
		cin >> line >> key;
		//找尾
		for( int t = 0 ; t < 11 ; t ++ ){
			if( key[t] == '\0' ){
				keyend = t;
				break;
			}
		}
		for( int t = 0 ; t < line ; t ++ ){
			cin >> look;
			//找尾
			for ( int t2 = 0 ; t2 < 101 ; t2 ++ ){
				if( look[t2] == '\0' ){
					lookend = t2;
					break;
				}
			}
			for ( int t2 = 0 ; t2 < lookend - keyend + 1 ; t2 ++ ){
				
				if( key[0] == key[t2] ){
					if( key[1] == look[t2 + 1] || key[t2 + 1] == '\0'){
						if( key[2] == look[t2 + 2] || key[t2 + 2] == '\0'){
							if( key[3] == look[t2 + 3] || key[t2 + 3] == '\0'){
								if( key[4] == look[t2 + 4] || key[t2 + 4] == '\0'){
									if( key[5] == look[t2 + 5] || key[t2 + 5] == '\0'){
										if( key[6] == look[t2 + 6] || key[t2 + 6] == '\0'){
											if( key[7] == look[t2 + 7] || key[t2 + 7] == '\0'){
												if( key[8] == look[t2 + 8] || key[t2 + 8] == '\0'){
													if( key[9] == look[t2 + 9] || key[t2 + 9] == '\0'){
														out ++;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}	 
		cout << out << "\n";
		out = 0;
		for ( int t = 0 ; t < 11 ; t ++ ){
			key[t] = '\0';
		}
		
		
	}
}