#include "RAM.h"


void RAM::r_data(){
	
	if(wr.read()){
		data_out = RAM_[ram_addr.read()];
		int n = ram_addr.read();
		//if(n<5812)
			//cout << "RAM "<< n << "\t " << data_out << endl;
	}

}

void RAM::w_data(){
	
	if(!(wr.read())){
		RAM_[ram_addr.read()] = data_in;
		int n = ram_addr.read();
		//cout << "RAM "<< n << "\t " << data_in << endl;
	}

}



