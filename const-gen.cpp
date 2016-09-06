#include <iostream>
using namespace std;


int main() {
	//Horizontals
	//Git gud
	for (int i=0;i<9;++i) {
		for (int j=0;j<9;++j) {
			for (int k=j+1;k<9;++k) {
				cout << "<CONSTRAINT TYPE=""Equals""><GIVEN> " << (char) (i+'A') << j+1 << " </GIVEN><GIVEN> "	<< (char) (i+'A') << k+1 << " </GIVEN><ARGS>complement</ARGS><PROPERTY>position =(7340.461, 5932.706)</PROPERTY></CONSTRAINT>" << endl;	
				
			}
		}
	}	

	cout << endl;

	// Verticals
	// Casul
	for (int i=0;i<9;++i) {
		for (int j=0;j<9;++j) {
			for (int k=j+1;k<9;++k) {
				cout << "<CONSTRAINT TYPE=""Equals""><GIVEN> " << (char) (j+'A') << i+1 << " </GIVEN><GIVEN> "	<< (char) (k+'A') << i+1 << " </GIVEN><ARGS>complement</ARGS><PROPERTY>position =(7340.461, 5932.706)</PROPERTY></CONSTRAINT>" << endl;	
			}
		}
	}	

	cout << endl;

	//Boxes
	//Beware of concentrated magic
	for (int i=0;i<9;i++) {
		for (int j=0;j<9;j++) {
			for (int k=j+1;k<9;++k) {
				if (((j%3) != (k%3)) && ((j/3) != (k/3))) {
					cout << "<CONSTRAINT TYPE=""Equals""><GIVEN> " << (char) (((j/3)+(i/3)*3)+'A') << ((j%3)+(i%3)*3)+1 << " </GIVEN><GIVEN> "	<< (char) (((k/3)+(i/3)*3)+'A') << ((k%3)+(i%3)*3)+1 << " </GIVEN><ARGS>complement</ARGS><PROPERTY>position =(7340.461, 5932.706)</PROPERTY></CONSTRAINT>" << endl;	
				}
			}
		}
	}
	return 0;
}
